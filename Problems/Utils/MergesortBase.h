/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of
* mergesort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class MergesortBase : public SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort); //inherited      

private:
    virtual void mergesort(std::vector<int>& vecToSort, 
        std::vector<int>& helper,
        int lowIndex,
        int highIndex) = 0;
    virtual void merge(std::vector<int>& vecToSort,
        std::vector<int>& helper,
        int lowIndex,
        int midIndex,
        int highIndex) = 0;
};