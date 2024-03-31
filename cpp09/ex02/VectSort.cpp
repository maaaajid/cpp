#include "VectSort.hpp"

int	VectSort::max_int(std::string num)
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

VectSort::VectSort(){};

VectSort::VectSort(char **av, int ac)
{
	this->size = ac - 1;
	this->sorted = 0;
	int x = 0;
	int y = -1;
	while (av[++x])
	{
		y = -1;
		if (!max_int(std::string(av[x])))
		{
			std::cout << "Error: "<< av[x] << " more than max int" << std::endl;	
			exit (1);
		}
		while (av[x][++y])
		{
			if (y == 0 && av[x][y] == '+')
				y++; 
			if (!isdigit(av[x][y]))
			{
				std::cout << "in argument " << x << " invalid character: " << av[x][y] << std::endl;
				exit (1);
			}
		}
	}
	x = 0;
	while (av[++x])
		vec.push_back(atoi(av[x]));
}

VectSort::VectSort(const VectSort &obj)
{
	*this = obj;
}

VectSort& VectSort::operator=(const VectSort &obj)
{
	if (this != &obj)
	{
		this->vec = obj.vec;
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

VectSort::~VectSort(){};


void	VectSort::startFordJonhson()
{
	double time = clock();
	this->printVector();
	it = vec.begin();
	it2 = vec.begin() + 1;
	while (it < vec.end())
	{
		if (*it < *it2)
			std::swap(*it, *it2);
		pair.push_back(std::pair<int, int>(*it, *it2));
		if (it2 < vec.end() - 2)
			it2 += 2;
		else
			*it2 = -1;
		it += 2;
	}
	l_it = pair.begin();
	pair = this->mergeSort(pair);
	l_it = pair.begin();
	vec.clear();
	this->insertion();
	this->printVector();
	this->printTime(time);
}

std::vector<std::pair<int, int> >	VectSort::merge(std::vector<std::pair<int, int> > left, std::vector<std::pair<int, int> > right)
{
	std::vector<std::pair<int, int> > merged;
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

std::vector<std::pair<int, int> >	VectSort::mergeSort(std::vector<std::pair<int, int> > p)
{
	if (p.size() == 1)
		return p;
	std::vector<std::pair<int, int> > left(p.begin(), p.begin() + p.size() / 2);
	std::vector<std::pair<int, int> > right(p.begin() + p.size() / 2 , p.end());
	left = mergeSort(left);
	right = mergeSort(right);

	return (merge(left, right));
}

void	VectSort::insertion()
{
	l_it = pair.begin();
	while (l_it != pair.end())
	{
		vec.push_back(l_it->first);
		l_it++;
	}
	l_it = pair.begin();
	while (l_it != pair.end())
	{
		vec.insert(lower_bound(vec.begin(), vec.end(), l_it->second), l_it->second);
		l_it++;
	}
	if (this->size % 2 != 0)
		vec.erase(vec.begin());
	this->sorted = 1;
}

void	VectSort::printVector()
{
	if (!this->sorted)
		std::cout << "Before: " << ' ';
	else
		std::cout << "After: " << ' ';
	it = vec.begin();
	while (it != vec.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void	VectSort::printTime(double time)
{
	std::cout << "Time to process a range of " << vec.size() 
		<< " elements with std::vector : " 
		<< std::fixed <<((double)clock() - time) / CLOCKS_PER_SEC
		<<  " us" << std::endl;
}
