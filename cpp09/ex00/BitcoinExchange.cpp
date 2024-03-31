#include "BitcoinExchange.hpp"
#include <string.h>
BitcoinExchange::BitcoinExchange(): inputFile(NULL){};

BitcoinExchange::BitcoinExchange(char *file):inputFile(file){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange &obj)
{
	if (this != &obj)
	{
		this->Map = obj.Map;
		this->inputFile = obj.inputFile;
		this->year = obj.year;
		this->month = obj.month;
		this->day = obj.day;
		this->value = obj.value;
		this->Date = obj.Date;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void	BitcoinExchange::readDb()
{
	std::string line;
	std::ifstream file("data.csv");
	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit (1); 
	}
	file >> line ;
	if (line != "date,exchange_rate")
	{
		std::cerr << "Error: Bad Format of input file" << std::endl;
		exit (1);
	}
	while (1)
	{
		file >> line;
		this->Map[line.substr(0, line.find(',', 0))] = line.substr(line.find(',', 0) + 1, line.npos);
		if (file.eof())
			break;
	}
	this->parseInput();
}

void	BitcoinExchange::parseInput()
{
	std::ifstream input(this->inputFile);
	if (!input)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit (1);
	}
	std::string line;
	getline(input, line, '\n');
 	if (line != "date | value")
	{
		std::cerr << "Error: Bad Format of input file" << std::endl;
		exit (1);
	}
	while (!input.eof())
	{
		getline(input, line, '\n');
		if (line.empty())
		{
			std::cout << "Error: an empty line" << std::endl;
			continue;
		}
		if (this->chackForDate(line.substr(0, line.find('|', 0))))
			if (this->checkForValue(line.substr(line.find('|', 0) + 1, line.size())))
				exchange();
	}
	
}

int	BitcoinExchange::chackForDate(std::string date)
{
	size_t x = 0;
	int		c = 0;
	this->Date = date.substr(0, date.size() - 1);
	if (date.size() != 11)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	while (x < date.size() - 1)
	{
		if ((!isdigit(date[x]) && date[x] != '-') || c == 3)
		{
			std::cout << "Error: bad input => " << date << std::endl;
			return (0);
		}
		if (date[x] == '-')
			c++;
		x++;	
	}
	if (date[4] != '-' || date[7] != '-' || date[10] != ' ')
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return (0);
	}
	this->year = date.substr(0, 4);
	this->month =  date.substr(5, 2);
	this->day = date.substr(8, 2);
	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	if (atoi(year.c_str()) < 2009 || atoi(month.c_str()) > 12
		|| atoi(month.c_str()) < 01 || atoi(day.c_str()) > checkForMaxDay()
		|| atoi(day.c_str()) < 01)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	if (atoi(year.c_str()) == 2009 && atoi(month.c_str()) == 01 && atoi(day.c_str()) == 1)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	return (1);
}

int BitcoinExchange::checkForMaxDay() const
{
	if (strcmp(this->month.c_str(), "02") == 0)
	{
		if (atoi(year.c_str()) % 4 == 0)
		{
			if (atoi(year.c_str()) % 100 != 0)
				return (29);
			else if (atoi(year.c_str()) % 100 == 0 && atoi(year.c_str()) % 400 == 0)
				return (29);
		}
		else
			return (28);
	}
	else if (atoi(month.c_str()) == 4 || atoi(month.c_str()) == 6 
		|| atoi(month.c_str()) == 9 || atoi(month.c_str()) == 11)
		return (30);
	return (31);
}


int BitcoinExchange::checkForValue(std::string value)
{
	int a = 0;
	size_t x = 0;
	if (value[0] != ' ' || !isdigit(value[value.size() - 1]) || !isdigit(value[1]))
	{
		std::cout << "Erorr: bad format =>|" << value << std::endl;
		return (0);
	}
	while (++x < value.size())
	{
		if (value[x] == '.')
			a++;
		if (!isdigit(value[x]) && value[x] != '.')
		{
			std::cout << "Error: bad value =>" << value << std::endl;
			return (0);
		}
	}
	if (a > 1)
	{
		std::cout << "Error: bad value =>" << value << std::endl;
		return (0);
	}
	value.erase(0, 1);
	this->value = atof(value.c_str());
	if (this->value < 0.0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return (0);
	}
	if (this->value > 1000.0)
	{
		std::cout << "Error: too large number" << std::endl;
		return (0);
	}
	return 1;
}

void	BitcoinExchange::exchange()
{
	it = Map.lower_bound(Date);
	if(it == Map.end() || it->first != Date)
		--it;
	float price = atof(it->second.c_str());
	std::cout << Date << " => " << value << " = " << std::fixed 
		<< std::setprecision(2) << price * value << std::endl;
}

