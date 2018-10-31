/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #4.
******************************************************************************/
#include "Quicksort4.h"
#include "Utils.h"

void Quicksort4::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int pivotIndex = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, lowIndex, pivotIndex - 1);
        quicksort(vecToSort, pivotIndex + 1, highIndex);
    }
}

int Quicksort4::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int pivotVal = vecToSort[highIndex];
    int nextSwapIndex = lowIndex;
    for (int currentIndex = lowIndex; currentIndex < highIndex; ++currentIndex)
    {
        if (vecToSort[currentIndex] < pivotVal)
        {
            swap(vecToSort[currentIndex], vecToSort[nextSwapIndex]);
            ++nextSwapIndex;
        }
    }
    swap(vecToSort[nextSwapIndex], vecToSort[highIndex]);
    
    return nextSwapIndex;
}
