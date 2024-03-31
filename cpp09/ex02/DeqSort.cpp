#include "PmergeMe.hpp"

int	DeqSort::check_max(std::string num)
{
	int x = 0;
	std::string max = "2147483647";
	if (num[0] == '+')
		num = num.substr(1, num.size() - 1);
	if (num.size() > 10)
		return (0);
	if (num.size() == 10)
	{
		while (num[x] <= max[x] && x < 10)
			x++;
		if (x < 10)
			return (0);
	}
	return (1);
}

DeqSort::DeqSort(){};

DeqSort::DeqSort(char **av, int ac)
{
	this->size = ac - 1;
	this->sorted = 0;
	int x = 0;
	int y = -1;
	while (av[++x])
	{
		y = -1;
		while (av[x][++y])
		{
			if (y == 0 && av[x][y] == '+')
				y++; 
			if (!isdigit(av[x][y]) || atoi(av[x]) == -1)
			{
				std::cout << "in argument " << x << " invalid character: " << av[x][y] << std::endl;
				exit (1);
			}
		}
	}
	x = 0;
	while (av[++x])
		deq.push_back(atoi(av[x]));
}

DeqSort::DeqSort(const DeqSort &obj)
{
	*this = obj;
}

DeqSort& DeqSort::operator=(const DeqSort &obj)
{
	if (this != &obj)
	{
		this->deq = obj.deq;
		this->sorted = obj.sorted;
		this->size = obj.size;
		this->pair = obj.pair;
		this->it = obj.it;
		this->it2 = obj.it2;
		this->l_it = obj.l_it;
		this->r_it = obj.r_it;
	}
	return (*this);
}

DeqSort::~DeqSort(){};


void	DeqSort::startFordJonhson()
{
	double time = clock();
	// this->printDeque();
	it = deq.begin();
	it2 = deq.begin() + 1;
	while (it < deq.end())
	{
		if (*it < *it2)
			std::swap(*it, *it2);
		pair.push_back(std::pair<int, int>(*it, *it2));
		if (it2 < deq.end() - 2)
			it2 += 2;
		else
			*it2 = -1;
		it += 2;
	}
	l_it = pair.begin();
	pair = this->mergeSort(pair);
	l_it = pair.begin();
	deq.clear();
	this->insertion();
	// this->printDeque();
	this->printTime(time);
}

std::deque<std::pair<int, int> >	DeqSort::merge(std::deque<std::pair<int, int> > left, std::deque<std::pair<int, int> > right)
{
	std::deque<std::pair<int, int> > merged;
	l_it = left.begin();
	r_it = right.begin();
	while (l_it != left.end() && r_it != right.end())
	{
		if (l_it->first >= r_it->first)
			merged.push_back(*r_it++);
		else if (l_it->first <= r_it->first)
			merged.push_back(*l_it++);
	}
	while (l_it != left.end())
		merged.push_back(*l_it++);
	while (r_it != right.end())
		merged.push_back(*r_it++);
	return (merged);
}

std::deque<std::pair<int, int> >	DeqSort::mergeSort(std::deque<std::pair<int, int> > p)
{
	if (p.size() == 1)
		return p;
	std::deque<std::pair<int, int> > left(p.begin(), p.begin() + p.size() / 2);
	std::deque<std::pair<int, int> > right(p.begin() + p.size() / 2 , p.end());
	left = mergeSort(left);
	right = mergeSort(right);

	return (merge(left, right));
}

void	DeqSort::insertion()
{
	l_it = pair.begin();
	while (l_it != pair.end())
	{
		deq.push_back(l_it->first);
		l_it++;
	}
	l_it = pair.begin();
	while (l_it != pair.end())
	{
		deq.insert(lower_bound(deq.begin(), deq.end(), l_it->second), l_it->second);
		l_it++;
	}
	if (this->size % 2 != 0)
		deq.erase(deq.begin());
	this->sorted = 1;
}

void	DeqSort::printDeque()
{
	if (!this->sorted)
		std::cout << "Before: " << ' ';
	else
		std::cout << "After: " << ' ';
	it = deq.begin();
	while (it != deq.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void	DeqSort::printTime(double time)
{
	std::cout << "Time to process a range of " << deq.size() 
		<< " elements with std::deque : " 
		<< std::fixed << ((double)clock() - time) / CLOCKS_PER_SEC
		<<  " us" << std::endl;
}