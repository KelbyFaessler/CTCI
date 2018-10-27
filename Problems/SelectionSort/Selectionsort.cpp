/******************************************************************************
* Description: Implementation of the selection sort algorithm.
******************************************************************************/
#include "Selectionsort.h"

#include "Utils.h"

void Selectionsort::selectionsort(std::vector<int>& vecToSort)
{
    if (vecToSort.size() < 2)
    {
        return;
    }

    for (int i = 0; i < vecToSort.size(); ++i)
    {
        //find min element in unsorted section
        int indexMin = i;
        for (int j = i + 1; j < vecToSort.size(); ++j)
        {
            if (vecToSort[j] < vecToSort[indexMin])
            {
                indexMin = j;
            }
        }

        swap(vecToSort[i], vecToSort[indexMin]);
    }   
}
