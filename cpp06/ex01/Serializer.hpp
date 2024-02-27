#pragma once



#include <stdint.h>
#include "Data.hpp"

class Serializer
{
public:
    Serializer();
    Serializer(Serializer &obj);
    Serializer& operator=(Serializer &obj);
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};