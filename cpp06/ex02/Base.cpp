#include "Base.hpp"
#include <typeinfo>


Base::~Base(){}

Base    *generate( void )
{
    Base *p = NULL;
    char *ss = new char;
    uintptr_t r = reinterpret_cast<uintptr_t>(ss);
    r = r % 10;
    if (r <= 3)
        p = new A;
    else if (r > 3 && r <= 7)
        p = new B;
    else
        p = new C;
    return (p);
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "the actual type is {A}" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "the actual type is {B}" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "the actual type is {C}" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "the actual type is {A}" << std::endl;
    }
    catch(std::bad_cast &e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "the actual type is {B}" << std::endl;
        }
        catch(std::bad_cast &e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "the actual type is {C}" << std::endl;
            }
            catch(std::bad_cast &e)
            {
                std::cerr << e.what();
            }
        }
    }
}