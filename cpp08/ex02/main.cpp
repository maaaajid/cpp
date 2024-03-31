#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<std::string> mstack;
    mstack.push("5");
    mstack.push("17");
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push("3");
    mstack.push("5");
    mstack.push("hello");
    mstack.push("77");
    mstack.push("world");
    mstack.push("73");
    mstack.push("7397");
    mstack.push("77336");
    mstack.push("654");
    MutantStack<std::string> b(mstack);
    MutantStack<std::string>::iterator it = b.begin();
    MutantStack<std::string>::iterator ite = b.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<std::string> s(mstack);
    return 0;
}
