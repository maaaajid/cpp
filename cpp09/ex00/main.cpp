
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		BitcoinExchange test(av[1]);
		test.readDb();
	}
	else 
	{
		std::cout << "Error: could not open file." << std::endl;
	}
}
