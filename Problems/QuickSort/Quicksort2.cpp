/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #2.
******************************************************************************/
#include "Quicksort2.h"
#include "Utils.h"

void Quicksort2::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    //missed the check for the base case of the recursion, here
    if (lowIndex < highIndex)
    {
        int partitionIndex = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, lowIndex, partitionIndex - 1);
        quicksort(vecToSort, partitionIndex + 1, highIndex);
    }
}

int Quicksort2::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int partitionVal = vecToSort[highIndex];
    int nextSwapIndex = lowIndex;
    //had to look back at easiest way to move all low elements to front. Remembered
    //two element approach, couldn't remember simpler approach
    for (int curIndex = lowIndex; curIndex < highIndex; ++curIndex)
    {
        if (vecToSort[curIndex] < partitionVal)
        {
            swap(vecToSort[curIndex], vecToSort[nextSwapIndex]);
            ++nextSwapIndex;
        }
    }
    swap(vecToSort[nextSwapIndex], vecToSort[highIndex]);
    
    return nextSwapIndex;
}
