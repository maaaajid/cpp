#include "RPN.hpp"

RPN::RPN(){};

RPN::RPN(char *input):Input(input){}

RPN::RPN(const RPN &obj):Stack_a(obj.Stack_a), Stack_b(obj.Stack_b)
{
	this->Input = obj.Input;
}

RPN&	RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		this->Stack_a = obj.Stack_a;
		this->Stack_b = obj.Stack_b;
		this->Input = obj.Input;
	}
	return (*this);
}

RPN::~RPN(){};

void	RPN::parseInput()
{
	size_t x = 0;
	while (x < Input.size() && Input[x] == ' ')
		x++;
	while(x < Input.size())
	{
		if (!isdigit(Input[x]) && Input[x] != '/' && Input[x] != '*' && Input[x] != '-' && Input[x] != '+')
		{
			std::cerr << "Error: invalid input" << std::endl;
			exit (1);
		}
		x++;
		if (x < Input.size() && Input[x] != ' ')
		{
			std::cerr << "Error: invalid input" << std::endl;
			exit (1);
		}
		while (x < Input.size() && Input[x] == ' ')
			x++;
	}
	this->putInStack();
	this->startcalculating();
}

void	RPN::putInStack()
{
	int x = Input.size();
	while (--x > -1)
	{
		if (Input[x] != ' ')
			Stack_a.push(Input[x]);
	}
}


void	RPN::startcalculating()
{
	int a;
	int b;
	while (!Stack_a.empty())
	{
		if (Stack_a.top() > 47 && Stack_a.top() < 58)
		{
			Stack_b.push(Stack_a.top() - 48);
			Stack_a.pop();
		}
		else if (Stack_b.size() >= 2)
		{
			a = Stack_b.top();
			Stack_b.pop();
			b = Stack_b.top();
			Stack_b.pop();
			if (a == 0 && Stack_a.top() == '/')
			{
				std::cerr << "Error: you are divide by 0" << std::endl;
				exit (1);
			}
			Stack_b.push(calcul(a, b, Stack_a.top()));
			Stack_a.pop();
		}
		else
		{
			std::cerr << "Error: invalide argument" << std::endl;
			exit (1);
		}
	}
	if (Stack_b.size() != 1)
		std::cerr << "Error: the result is invalid" << std::endl;
	else
		std::cout << "the result is: " << Stack_b.top() << std::endl;
}

int		RPN::calcul(int a, int b, int c) const
{
	switch (c)
	{
	case '/':
		return (b / a);
	case '*':
		return (b * a);
	case '-':
		return (b - a);
	case '+':
		return (b + a);
	}
	return 0;
}




