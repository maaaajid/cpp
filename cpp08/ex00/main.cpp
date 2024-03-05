#include "Easyfind.hpp"
#include <vector>

int main()
{
    try
    {
        int array[] = {17, 65, 25, 3, 3, 48, 97, 64, 33, 98, 42, 91};
        std::vector<int> vec(array, array + sizeof(array) / sizeof(array[0]));
        easyfind(vec, 3);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}