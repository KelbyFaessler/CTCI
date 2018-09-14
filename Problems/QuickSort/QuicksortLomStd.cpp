/******************************************************************************
* Description: Implementation of the Standard Lomuto partitioning scheme for
* the quicksort algorithm.
*
* Lomuto partitioning scheme:
******************************************************************************/
#include "QuicksortLomStd.h"
#include "Utils.h"

void QuicksortLomStd::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int p = partition(vecToSort, lowIndex, highIndex);
        quicksort(vecToSort, lowIndex, p - 1);
        quicksort(vecToSort, p + 1, highIndex);
    }
}

int QuicksortLomStd::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
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