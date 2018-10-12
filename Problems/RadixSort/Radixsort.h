/******************************************************************************
* Description: Implementation of the radix sort algorithm.
******************************************************************************/
#pragma once

#include "RadixsortBase.h"
#include <vector>

class Radixsort : public RadixsortBase
{
public:

private:
    void radixsort(std::vector<int>& vecToSort);
    int countingsort(std::vector<int>& vecToSort, int digit);
};