/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #1.
* Included is one optimization I made: to select the middle element as the
* pivot rather than the first or last. This means performance won't degrade to
* O(n^2) when the array is already sorted or reverse sorted.
*
******************************************************************************/
#include "Quicksort1.h"
#include "Utils.h"

void Quicksort1::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int partitionIndex = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, 0, partitionIndex - 1);
        quicksort(vecToSort, partitionIndex + 1, highIndex);
    }
}

int Quicksort1::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int pivotValue = vecToSort[highIndex];
    int nextSwapIndex = lowIndex;
    int currentIndex = lowIndex;
    while (currentIndex < highIndex)
    {
        if (vecToSort[currentIndex] < pivotValue)
        {
            swap(vecToSort[currentIndex], vecToSort[nextSwapIndex]);
            ++nextSwapIndex;
        }
        ++currentIndex;
    }
    swap(vecToSort[nextSwapIndex], vecToSort[highIndex]);
    return nextSwapIndex;
}
