/******************************************************************************
* Description: Defines a generic sorting interface to implement. This
* interface can be shared amongst different types of sorting algorithms, and as
* long as they all implement the same interface, they can be easily tested.
******************************************************************************/
#pragma once

#include <vector>

class SortBase
{
public:
    virtual void sort(std::vector<int>& vecToSort) = 0;

private:

};