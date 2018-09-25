/******************************************************************************
* Description: Implementation of the Lomuto partitioning scheme for the 
* quicksort algorithm. Included is one optimization I made: to select the
* middle element as the pivot rather than the first or last. This means 
* performance won't degrade to O(n^2) when the array is already sorted or 
* reverse sorted.
*
* Lomuto partitioning scheme:
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class QuicksortLom : public QuicksortBase
{
    public:

    private:
        void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);
        int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};