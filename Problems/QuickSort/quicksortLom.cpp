
#include "quicksortLom.h"

#include "utils.h"

void quicksortLom(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int pivotIndex = partitionLom(vecToSort, lowIndex, highIndex);
        quicksortLom(vecToSort, lowIndex, pivotIndex - 1);
        quicksortLom(vecToSort, pivotIndex + 1, highIndex);
    }
}

int partitionLom(std::vector<int>& vecToSort, int lowIndex, int highIndex)
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


void quicksortLomStd(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int p = partitionLomStd(vecToSort, lowIndex, highIndex);
        quicksortLomStd(vecToSort, lowIndex, p - 1);
        quicksortLomStd(vecToSort, p + 1, highIndex);
    }
}

int partitionLomStd(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int pivot = vecToSort[highIndex];
    int i = lowIndex;
    for (int j = lowIndex; j < highIndex; ++j)
    {
        if (vecToSort[j] < pivot)
        {
            swap(vecToSort[i], vecToSort[j]);
            ++i;
        }
    }
    swap(vecToSort[i], vecToSort[highIndex]);
    return i;
}