#pragma once

#include <cstdlib>
#include <string.h>
#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <map>

class	BitcoinExchange
{
private:
	char *inputFile;
	std::map<std::string, std::string>	Map;
	std::map<std::string, std::string>::iterator it;
	std::string Date;
	std::string year;
	std::string month;
	std::string day;
	float value;
public:
	BitcoinExchange();
	BitcoinExchange(char *file);
	BitcoinExchange(BitcoinExchange &obj);
	BitcoinExchange&	operator=(BitcoinExchange &obj);
	~BitcoinExchange();

	void	readDb();
	void	parseInput();
	int		chackForDate(std::string data);
	int		checkForValue(std::string value);
	int		checkForMaxDay() const;
	void	exchange();
};