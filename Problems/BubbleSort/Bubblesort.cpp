/******************************************************************************
* Description: Implementation of the bubble sort algorithm.
******************************************************************************/
#include "Bubblesort.h"

#include "Utils.h"

void Bubblesort::bubblesort(std::vector<int>& vecToSort)
{
    if (vecToSort.size() < 2)
    {
        return;
    }

    bool doneSorting = false;
    while (!doneSorting)
    {
        doneSorting = true;
        for (int i = 1; i < vecToSort.size(); ++i)
        {
            if (vecToSort[i] < vecToSort[i - 1])
            {
                swap(vecToSort[i], vecToSort[i - 1]);
                doneSorting = false;
            }
        }
    }
}
