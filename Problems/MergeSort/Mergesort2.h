/******************************************************************************
* Description: Implementation of the mergesort algorithm; practice attempt #2.
******************************************************************************/
#pragma once

#include "MergesortBase.h"
#include <vector>

class Mergesort2 : public MergesortBase
{
public:

private:
    void mergesort(std::vector<int>& vecToSort, std::vector<int>& helper, int lowIndex, int highIndex);
    void merge(std::vector<int>& vecToSort, std::vector<int>& helper, int lowStartIndex, int highStartIndex, int highEndIndex);
};