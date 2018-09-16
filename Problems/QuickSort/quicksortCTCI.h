/******************************************************************************
* Description: Implementation of the the partitioning scheme for the quicksort 
* algorithm given in CTCI (Cracking the Coding Interview). Included is one 
* optimization I made: to select the middle element as the pivot rather than 
* the first or last. This means performance won't degrade to O(n^2) when the 
* array is already sorted or reverse sorted.
*
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class QuicksortCTCI : public QuicksortBase
{
public:
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);

private:
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};