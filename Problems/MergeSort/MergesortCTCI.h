/******************************************************************************
* Description: Implementation of the Mergesort algorithm given in CTCI.
*
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class MergesortCTCI : public SortBase
{
public:
    void sort(std::vector<int>& vecToSort, int lowIndex, int highIndex);

private:
    void mergesort(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};