# pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <time.h>
#include <algorithm>

class DeqSort
{
private:
	bool										sorted;
	int											size;
	std::deque<int> 							deq;
	std::deque<std::pair<int, int> >			pair;
	std::deque<int>::iterator 					it;
	std::deque<int>::iterator 					it2;
	std::deque<std::pair<int, int> >::iterator l_it;
	std::deque<std::pair<int, int> >::iterator r_it;
public:
	DeqSort();
	DeqSort(char **av, int ac);
	DeqSort(const DeqSort &obj);
	DeqSort& operator=(const DeqSort &obj);
	~DeqSort();
	void	startFordJonhson();
	std::deque<std::pair<int, int> > mergeSort(std::deque<std::pair<int, int> > pair);
	std::deque<std::pair<int, int> > merge(std::deque<std::pair<int, int> > left,
		std::deque<std::pair<int, int> > right);
	void	insertion();
	void	printDeque();
	void	printTime(double time);
	int		check_max(std::string num);
};

