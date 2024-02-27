#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
    Data *p = new Data;
    p->a = 10;
    p->b = 20;
    p->x = 1337;

    uintptr_t a = Serializer::serialize(p);
    Data *m = Serializer::deserialize(a);

    std::cout << m->x << std::endl;
    delete m;
}