/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #1. 
* Included is one optimization I made: to select the middle element as the 
* pivot rather than the first or last. This means performance won't degrade to 
* O(n^2) when the array is already sorted or reverse sorted.
*
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class Quicksort1: public QuicksortBase
{
public:
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);

private:
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};