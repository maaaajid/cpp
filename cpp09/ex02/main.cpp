#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
	{
		try
		{
			PmergeMe test(av);
			test.Pairwise();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
	{
		std::cout << "Error: the program need more arguments!!!" << std::endl;
	}
}