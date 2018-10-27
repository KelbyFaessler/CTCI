/******************************************************************************
* Description: Implementation of the bubble sort algorithm.
******************************************************************************/
#pragma once

#include "BubblesortBase.h"
#include <vector>

class Bubblesort : public BubblesortBase
{
public:

private:
    void bubblesort(std::vector<int>& vecToSort);
};
