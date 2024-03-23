#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){};

PmergeMe::PmergeMe(char **av)
{
	int x = 0;
	int y = -1;
	std::vector<int>::iterator it;
	while (av[++x])
	{
		y = -1;
		while (av[x][++y])
		{
			if (y == 0 && av[x][y] == '+')
				y++; 
			if (!isdigit(av[x][y]))
			{
				std::cout << "in index " << x << " invalid character: " << av[x][y] << std::endl;
				throw PmergeMe::error();
			}
		}
	}
	x = 0;
	vec.push_back(atoi(av[++x]));
	while (av[++x])
	{
		it = std::find(vec.begin(), vec.end(), atoi(av[x]));
		if (it == vec.end())
			vec.push_back(atoi(av[x]));
		else
		{
			std::cout << "in index " << x << " duplicated number: " << av[x] << std::endl;
			throw PmergeMe::error();
		}
	}
}

PmergeMe::PmergeMe(PmergeMe &obj)
{
	this->vec = obj.vec;
}

PmergeMe& PmergeMe::operator=(PmergeMe &obj)
{
	if (this != &obj)
	{
		this->vec = obj.vec;
	}
	return (*this);
}

PmergeMe::~PmergeMe(){};

const char *PmergeMe::error::what() const throw()
{
	return ("Error: invalid input");
}

void	PmergeMe::Pairwise()
{
	it = vec.begin();
	it2 = vec.begin() + 1;
	while (it <= vec.end())
	{
		if (*it < *it2)
			std::swap(*it, *it2);
		pair.push_back(std::pair<int, int>(*it, *it2));
		if (it2 < vec.end() - 2)
			it2 += 2;
		it += 2;
	}
	p_it = pair.begin();
	while(p_it != pair.end())
	{
		std::cout << "first: " << p_it->first << " second: " << p_it->second << std::endl;
		p_it++;
	}
}

void	PmergeMe::recursion()
{
	
}