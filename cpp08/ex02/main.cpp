#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(77);
    mstack.push(37);
    mstack.push(73);
    mstack.push(7397);
    mstack.push(77336);
    mstack.push(654);
    MutantStack<int> b(mstack);
    MutantStack<int>::iterator it = b.begin();
    MutantStack<int>::iterator ite = b.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
