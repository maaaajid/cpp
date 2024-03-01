#pragma once

#include <exception>
#include <iostream>

template<typename T, typename U>
void    iter(T *arr, int n, U f)
{
    int x = 0;
    while (x < n)
    {
        f(arr[x], n);
        x++;
    }
}




