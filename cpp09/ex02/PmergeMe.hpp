#pragma once
 
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "VectSort.hpp"
#include "DeqSort.hpp"

class PmergeMe
{
	VectSort vec;
	DeqSort deq;
public:
	PmergeMe();
	PmergeMe(char **av, int ac);
	PmergeMe(const PmergeMe &obj);
	PmergeMe& operator=(const PmergeMe &obj);
	~PmergeMe();
};
