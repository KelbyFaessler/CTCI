/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #3.
******************************************************************************/
#pragma once

#include "QuicksortBase.h"
#include <vector>

class Quicksort3 : public QuicksortBase
{
public:

private:
    //Add functions here:
    //first create from scratch function declarations (header) and definitions (cpp).
    //Only then look at QuicksortBase interface and adjust if necessary.
    void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex);
    int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex);
};