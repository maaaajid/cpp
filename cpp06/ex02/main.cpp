#include "Base.hpp"

int main()
{
    Base *a = NULL;
    identify(*a);
    Base *b = generate();
    identify(b);
    identify(*b);
}