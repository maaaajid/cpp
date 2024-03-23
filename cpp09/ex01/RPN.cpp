#include "RPN.hpp"

RPN::RPN(){};

RPN::RPN(char *input):Input(input){}

RPN::RPN(RPN &obj):Stack_a(obj.Stack_a), Stack_b(obj.Stack_b)
{
	this->Input = obj.Input;
}

RPN&	RPN::operator=(RPN &obj)
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
	while(x < Input.size())
	{
		if (!isdigit(Input[x]) && Input[x] != '/' && Input[x] != '*'
			&& Input[x] != '-' && Input[x] != '+' && (Input[x + 1] != ' ' 
			|| Input[x + 1] != '\0'))
		{
			std::cerr << "Error: invalid input" << std::endl;
			exit (1);
		}
		x++;
		while (Input[x] && Input[x] == ' ')
			x++;
	}
	if (!isdigit(Input[0]) || Input[1] != ' ' || !isdigit(Input[2]))
	{
		std::cerr << "Error: bad argument" << std::endl;
		exit (1);
	}
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
		else
		{
			a = Stack_b.top();
			Stack_b.pop();
			b = Stack_b.top();
			Stack_b.pop();
			if (a == 0 && Stack_a.top() == '/')
				throw std::runtime_error("Indivisible input");
			Stack_b.push(calcul(a, b, Stack_a.top()));
			Stack_a.pop();
		}
	}
	if (Stack_b.size() > 1)
	{
		std::cerr << "stack not empty:\n";
		while (!Stack_b.empty())
		{
			std::cerr << Stack_b.top() << " ";
			Stack_b.pop();
		}
		std::cerr << '\n';
	}
	else
		std::cout << Stack_b.top() << " " << std::endl;
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




