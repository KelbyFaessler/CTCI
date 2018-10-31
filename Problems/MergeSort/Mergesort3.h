/******************************************************************************
* Description: Implementation of the mergesort algorithm; practice attempt #3.
******************************************************************************/
#pragma once

#include "MergesortBase.h"
#include <vector>

class Mergesort3 : public MergesortBase
{
public:

private:
    void mergesort(std::vector<int>& vecToSort, std::vector<int>& helper, int lowIndex, int highIndex);
    void merge(std::vector<int>& vecToSort, std::vector<int>& helper, int lowStartIndex, int highStartIndex, int highEndIndex);
};