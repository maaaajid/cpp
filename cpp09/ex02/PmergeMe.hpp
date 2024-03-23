#pragma once
 
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
class PmergeMe
{
	std::vector<int> vec;
	std::vector<std::pair<int, int> > pair;
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;
	std::vector<std::pair<int, int> >::iterator p_it;
public:
	PmergeMe();
	PmergeMe(char **av);
	PmergeMe(PmergeMe &obj);
	PmergeMe& operator=(PmergeMe &obj);
	~PmergeMe();
	class error: public std::exception
	{
		const char *what() const throw();
	};

	void	Pairwise();
	void	recursion();
	
};