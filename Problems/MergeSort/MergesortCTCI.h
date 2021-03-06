/******************************************************************************
* Description: Implementation of the Mergesort algorithm given in CTCI.
******************************************************************************/
#pragma once

#include "MergesortBase.h"
#include <vector>

class MergesortCTCI : public MergesortBase
{
public:

private:
    virtual void mergesort(std::vector<int>& vecToSort,
        std::vector<int>& helper,
        int lowIndex,
        int highIndex);
    virtual void merge(std::vector<int>& vecToSort,
        std::vector<int>& helper,
        int lowIndex,
        int midIndex,
        int highIndex);
};