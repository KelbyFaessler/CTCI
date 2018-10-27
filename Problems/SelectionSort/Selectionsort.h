/******************************************************************************
* Description: Implementation of the selection sort algorithm.
******************************************************************************/
#pragma once

#include "SelectionsortBase.h"
#include <vector>

class Selectionsort : public SelectionsortBase
{
public:

private:
    void selectionsort(std::vector<int>& vecToSort);
};
