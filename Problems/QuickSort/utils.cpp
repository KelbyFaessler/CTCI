#include "utils.h"

#include <iostream>

void swap(int& i, int& j)
{
    int temp = i;
    i = j;
    j = temp;
}

void outputVector(std::vector<int>& input, const std::string& title)
{
    std::cout << title;
    for (int elem : input)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}