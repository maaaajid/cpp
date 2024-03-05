#pragma once

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
void   easyfind(T container, int key)
{
    std::vector<int>::iterator it = find(container.begin(), container.end(), key);
    if (it != container.end())
        std::cout << "the number " << key << " inside the container" << std::endl;
    else if (it == container.end())
        throw std::out_of_range("the number is not inside the container");
}

