/******************************************************************************
* Description: Implementation of the insertion sort algorithm.
******************************************************************************/
#include "Insertionsort.h"

#include "Utils.h"

void Insertionsort::insertionsort(std::vector<int>& vecToSort)
{
    if (vecToSort.size() < 2)
    {
        return;
    }

    for (int i = 1; i < vecToSort.size(); ++i)
    {
        int currentIndex = i;
        while ((currentIndex > 0) && (vecToSort[currentIndex - 1] > vecToSort[currentIndex]))
        {
            swap(vecToSort[currentIndex - 1], vecToSort[currentIndex]);
            currentIndex -= 1;
        }
    }
}
