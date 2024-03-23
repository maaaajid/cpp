#pragma once

#include <iostream>
#include <cctype>
#include <stack>
#include <cstdlib>

class RPN
{
private:
	std::stack<int> Stack_a;
	std::stack<int> Stack_b;
	std::string Input;
public:
	RPN();
	RPN(char *input);
	RPN(RPN &obj);
	RPN& operator=(RPN &obj);
	~RPN();

	void	parseInput();
	void	putInStack();
	void	startcalculating();
	int		calcul(int a, int b, int c) const;
};