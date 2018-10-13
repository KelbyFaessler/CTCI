/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of
* radix sort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class RadixsortBase : public SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort); //inherited      

private:
    virtual void radixsort(std::vector<int>& vecToSort) = 0;
};