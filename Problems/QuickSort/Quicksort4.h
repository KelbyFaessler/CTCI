/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #4.
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class Quicksort4 : public QuicksortBase
{
public:

private:
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};