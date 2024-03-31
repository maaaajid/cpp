#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <time.h>
#include <algorithm>

class VectSort
{
private:
	bool										sorted;
	int											size;
	std::vector<int> 							vec;
	std::vector<std::pair<int, int> >			pair;
	std::vector<int>::iterator 					it;
	std::vector<int>::iterator 					it2;
	std::vector<std::pair<int, int> >::iterator l_it;
	std::vector<std::pair<int, int> >::iterator r_it;
public:
	VectSort();
	VectSort(char **av, int ac);
	VectSort(const VectSort &obj);
	VectSort& operator=(const VectSort &obj);
	~VectSort();
	void	startFordJonhson();
	std::vector<std::pair<int, int> > mergeSort(std::vector<std::pair<int, int> > pair);
	std::vector<std::pair<int, int> > merge(std::vector<std::pair<int, int> > left,
		std::vector<std::pair<int, int> > right);
	void	insertion();
	void	printVector();
	void	printTime(double time);
	int		max_int(std::string num);
};