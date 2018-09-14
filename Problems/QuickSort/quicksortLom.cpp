/******************************************************************************
* Description: Implementation of the Lomuto partitioning scheme for the
* quicksort algorithm. Included is one optimization I made: to select the
* middle element as the pivot rather than the first or last. This means
* performance won't degrade to O(n^2) when the array is already sorted or
* reverse sorted.
*
* Lomuto partitioning scheme:
******************************************************************************/
#include "QuicksortLom.h"

#include "Utils.h"


void QuicksortLom::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int pivotIndex = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, lowIndex, pivotIndex - 1);
        quicksort(vecToSort, pivotIndex + 1, highIndex);
    }
}

int QuicksortLom::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int initPivotIndex = (lowIndex + highIndex) / 2;   //is this going to work with this as pivot instead of highIndex. What about
    int pivotVal = vecToSort[initPivotIndex];          //last swap where vec[i] and vec[high] are swapped? How to do that now?
    int finalPivotIndex = initPivotIndex;
    int nextSwapIndex = lowIndex;

    //for answer to question above, maybe loop over entire array instead of omitting last element?
    for (int i = lowIndex; i <= highIndex; ++i)
    {
        if (vecToSort[i] < pivotVal)
        {
            swap(vecToSort[i], vecToSort[nextSwapIndex]);
            if (nextSwapIndex == finalPivotIndex)
            {
                finalPivotIndex = i;
            }
            ++nextSwapIndex;
        }
    }
    swap(vecToSort[finalPivotIndex], vecToSort[nextSwapIndex]);
    finalPivotIndex = nextSwapIndex;

    return finalPivotIndex;
}
