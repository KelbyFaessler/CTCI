/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of
* bubble sort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class BubblesortBase : public SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort); //inherited      

private:
    virtual void bubblesort(std::vector<int>& vecToSort) = 0;
};