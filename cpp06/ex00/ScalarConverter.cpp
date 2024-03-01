
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter &obj){(void)obj;}

ScalarConverter& ScalarConverter::operator=(ScalarConverter &obj)
{
    (void)obj;
    return(*this);
}

ScalarConverter::~ScalarConverter(){};