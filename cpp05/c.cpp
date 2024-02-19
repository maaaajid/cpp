#include <iostream>
#include <type_traits>


class base
{
    int a;
    int b;
public:
    int geta(){return a;}
    int getb(){return b;}
    virtual void    draw() = 0;
};

class drived: public base
{
public:
    void    draw(){std::cout << "hello " << this->geta() << std::endl;}
};


int main()
{
    drived a;
    a.draw();
}