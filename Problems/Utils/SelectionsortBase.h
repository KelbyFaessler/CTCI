/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of
* selection sort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class SelectionsortBase : public SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort); //inherited      

private:
    virtual void selectionsort(std::vector<int>& vecToSort) = 0;
};