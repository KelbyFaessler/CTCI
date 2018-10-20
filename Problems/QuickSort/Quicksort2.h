/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #1.
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class Quicksort2 : public QuicksortBase
{
public:

private:
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};