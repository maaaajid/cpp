
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			BitcoinExchange test(av[1]);
			test.readDb();
			test.parseInput();
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else 
	{
		std::cout << "Error: could not open file." << std::endl;
	}
}
