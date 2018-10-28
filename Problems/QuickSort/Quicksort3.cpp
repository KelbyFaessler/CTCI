/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #3.
******************************************************************************/
#include "Quicksort3.h"
#include "Utils.h"

void Quicksort3::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int pivotIndex = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, lowIndex, pivotIndex - 1);
        quicksort(vecToSort, pivotIndex + 1, highIndex);
    }
}

int Quicksort3::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int pivotVal = vecToSort[highIndex];
    int nextSwapIndex = lowIndex; //wrote = 0 here initially instead of = lowIndex, BUG!
    for (int index = lowIndex; index < highIndex; ++index) //also wrote index = 0 here initially instead of index = lowIndex, BUG!
    {
        if (vecToSort[index] < pivotVal)
        {
            swap(vecToSort[index], vecToSort[nextSwapIndex]);
            ++nextSwapIndex;
        }
    }
    swap(vecToSort[highIndex], vecToSort[nextSwapIndex]);
    
    return nextSwapIndex;
}
