/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #1.
* Included is one optimization I made: to select the middle element as the
* pivot rather than the first or last. This means performance won't degrade to
* O(n^2) when the array is already sorted or reverse sorted.
*
******************************************************************************/
#include "QuicksortBase.h"

void QuicksortBase::sort(std::vector<int>& vecToSort)
{
    quicksort(vecToSort, 0, vecToSort.size() - 1);
}