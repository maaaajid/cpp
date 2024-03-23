#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			RPN test(av[1]);
			test.parseInput();
			test.putInStack();
			test.startcalculating();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		std::cerr << "Error: invalid arguments" << std::endl;
		return (1);
	}
	
}