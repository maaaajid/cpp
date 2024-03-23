#include "BitcoinExchange.hpp"
#include <string.h>
BitcoinExchange::BitcoinExchange(): inputFile(NULL){};

BitcoinExchange::BitcoinExchange(char *file):inputFile(file){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &obj)
{
	this->inputFile = obj.inputFile;
	this->Map = obj.Map;
	this->year = obj.year;
	this->month = obj.month;
	this->day = obj.day;
	this->Date = obj.Date;
	this->value = obj.value;
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

const char	*BitcoinExchange::badFormat::what() const throw()
{
	return("error: Bad Format of input file");
}

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
	while (1)
	{
		file >> line;
		this->Map.insert(std::pair<std::string, std::string>(line.substr(0, line.find(',', 0)), line.substr(line.find(',', 0) + 1, line.npos)));
		if (file.eof())
			break;
	}
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
		throw BitcoinExchange::badFormat();
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
	this->Date = date.substr(0, date.size() - 1);
	if (date.size() != 11)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	this->year = date.substr(0, date.find('-', 0));
	this->month =  date.substr(year.size() + 1, 2);
	this->day = date.substr(month.size() + 6, 2);
	if (date[4] != '-' || date[7] != '-' || date[10] != ' '
		|| year.size() != 4 || month.size() != 2 || day.size() != 2)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	if (atoi(year.c_str()) < 2009 || atoi(month.c_str()) > 12
		|| atoi(month.c_str()) < 01 || atoi(day.c_str()) > checkForMaxDay())
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
	int x = 0;
	if (value[0] != ' ' || !isdigit(value[value.size() - 1]))
	{
		std::cout << "Erorr: bad format =>|" << value << std::endl;
		return (0);
	}
	while (value[++x])
	{
		if (!isdigit(value[x]) && value[x] != '.' && value[x] != '-')
		{
			std::cout << "Error: bad value =>" << value << std::endl;
			return (0);
		}
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
	if(it->first != Date)
		--it;
	float price = atof(it->second.c_str());
	std::cout << Date << " => " << value << " = " << price * value << std::endl;
}


















