/******************************************************************************
* Description: Implementation of the insertion sort algorithm.
******************************************************************************/
#pragma once

#include "InsertionsortBase.h"
#include <vector>

class Insertionsort : public InsertionsortBase
{
public:

private:
    void insertionsort(std::vector<int>& vecToSort);
};
