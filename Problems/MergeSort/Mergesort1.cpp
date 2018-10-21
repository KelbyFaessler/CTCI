/******************************************************************************
* Description: Provides an empty skeleton as a starting point for mergesort
* implemenation practice.
*
* Comment for implementation: (delete this line + everything above, keep below)
* Description: Implementation of the mergesort algorithm; practice attempt #1.
******************************************************************************/
#include "Mergesort1.h"
#include "Utils.h"

void Mergesort1::mergesort(std::vector<int>& vecToSort, std::vector<int>& tempVec, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int mid = (lowIndex + highIndex) / 2;
        mergesort(vecToSort, tempVec, lowIndex, mid);
        mergesort(vecToSort, tempVec, mid + 1, highIndex);
        merge(vecToSort, tempVec, lowIndex, mid + 1, highIndex);
    }
}

void Mergesort1::merge(std::vector<int>& vecToSort, std::vector<int>& tempVec, int lowStart, int highStart, int highEnd)
{
    for (int i = lowStart; i <= highEnd; ++i)
    {
        tempVec[i] = vecToSort[i];
    }

    int currentIndex = lowStart;
    int currentLowIndex = lowStart;
    int currentHighIndex = highStart;
    int lowEnd = highStart - 1;
    while ((currentLowIndex <= lowEnd) && (currentHighIndex <= highEnd))
    {
        if (tempVec[currentLowIndex] < tempVec[currentHighIndex])
        {
            vecToSort[currentIndex] = tempVec[currentLowIndex];
            ++currentLowIndex;
        }
        else
        {
            vecToSort[currentIndex] = tempVec[currentHighIndex];
            ++currentHighIndex;
        }
        ++currentIndex;
    }

    //fill in remaining low side values, if necessary. Don't need to worry about 
    //high side because they're already there
    while (currentLowIndex <= lowEnd)
    {
        vecToSort[currentIndex] = tempVec[currentLowIndex];
        ++currentIndex;
        ++currentLowIndex;
    }
}
