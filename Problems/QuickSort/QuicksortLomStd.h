/******************************************************************************
* Description: Implementation of the Standard Lomuto partitioning scheme for 
* the quicksort algorithm.
*
* Lomuto partitioning scheme:
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class QuicksortLomStd : public QuicksortBase
{
public:
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);

private:
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};