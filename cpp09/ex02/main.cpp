#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
	{
		PmergeMe start(av, ac);
	}
	else
	{
		std::cout << "Error: the program need more arguments!!!" << std::endl;
	}
}