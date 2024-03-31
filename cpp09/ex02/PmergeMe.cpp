#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){};

PmergeMe::PmergeMe(char **av, int ac):vec(av, ac), deq(av, ac)
{
	vec.startFordJonhson();
	deq.startFordJonhson();
};

PmergeMe::PmergeMe(const PmergeMe &obj):vec(obj.vec), deq(obj.deq)
{
	*this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &obj)
{
	if (this != &obj)
	{
		this->vec = obj.vec;
		this->deq = obj.deq;
	}
	return (*this);
}

PmergeMe::~PmergeMe(){}


