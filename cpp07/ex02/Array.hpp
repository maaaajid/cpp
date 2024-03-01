#pragma once

#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <stdlib.h> 

template<class T>
class Array
{
private:
    T *arr;
    int _size;
public:
    Array():arr(NULL){};
    Array(unsigned int n):_size((int)n)
    {
        int x = 0;
        arr = new T[n];
        while (x < (int)n)
            this->arr[x++] = T();
    }
    Array(Array const &obj)
    {
        int x = 0;
        this->arr = new T[obj._size];
        this->_size = obj._size;
        while (x < obj.size())
        {
            this->arr[x] = obj.arr[x];
            x++;
        }
    }
    Array&  operator=(Array const &obj)
    {
        if (this != obj)
        {
            this->_size = obj._size;
            delete[] this->arr;
            this->arr = new T[obj._size];
            int x = 0;
            while (x < this->_size)
            {
                this->arr[x] = obj.arr[x];
                x++;
            }
        }
        return(*this);
    }
    ~Array()
    {
        delete[] arr;
    }
    int     size() const
    {
        return (this->_size);
    }
    T&  operator[](int n)
    {
    
        if (this->size() <= n || n < 0)
            throw std::out_of_range("index out of the array elements");
        return arr[n];
    }
};

