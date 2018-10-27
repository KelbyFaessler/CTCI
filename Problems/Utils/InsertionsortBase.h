/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of
* insertion sort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class InsertionsortBase : public SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort); //inherited      

private:
    virtual void insertionsort(std::vector<int>& vecToSort) = 0;
};