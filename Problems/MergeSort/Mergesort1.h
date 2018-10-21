/******************************************************************************
* Description: Provides an empty skeleton as a starting point for mergesort
* implemenation practice.
*
* Comment for implementation: (delete this line + everything above, keep below)
* Description: Implementation of the mergesort algorithm; practice attempt #1.
******************************************************************************/
#pragma once

#include "MergesortBase.h"
#include <vector>

class Mergesort1 : public MergesortBase
{
public:

private:
    //Add functions here:
    //first create from scratch function declarations (header) and definitions (cpp).
    //Only then look at MergesortBase interface and adjust if necessary.
    void mergesort(std::vector<int>& vecToSort, std::vector<int>& tempVec, int lowIndex, int highIndex);
    void merge(std::vector<int>& vecToSort, std::vector<int>& tempVec, int lowStart, int highStart, int highEnd);
};