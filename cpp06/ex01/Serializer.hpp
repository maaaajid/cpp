#pragma once



#include <stdint.h>
#include "Data.hpp"

class Serializer
{
    Serializer();
    Serializer(Serializer &obj);
    Serializer& operator=(Serializer &obj);
    ~Serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};