/******************************************************************************
* Description: Implementation of the mergesort algorithm; practice attempt #3.
******************************************************************************/
#include "Mergesort3.h"
#include "Utils.h"

void Mergesort3::mergesort(std::vector<int>& vecToSort, std::vector<int>& helper, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int midIndex = (lowIndex + highIndex) / 2;
        mergesort(vecToSort, helper, lowIndex, midIndex);
        mergesort(vecToSort, helper, midIndex + 1, highIndex);
        merge(vecToSort, helper, lowIndex, midIndex + 1, highIndex);
    }
}

void Mergesort3::merge(std::vector<int>& vecToSort, std::vector<int>& helper, int lowStartIndex, int highStartIndex, int highEndIndex)
{
    //copy from main vector into helper
    for (int i = lowStartIndex; i <= highEndIndex; ++i)
    {
        helper[i] = vecToSort[i];
    }

    //merge into main vector
    int currentIndex = lowStartIndex;
    int currentLowIndex = lowStartIndex;
    int currentHighIndex = highStartIndex;
    int lowEndIndex = highStartIndex - 1;
    while ((currentLowIndex <= lowEndIndex) && (currentHighIndex <= highEndIndex))
    {
        if (helper[currentLowIndex] < helper[currentHighIndex])
        {
            vecToSort[currentIndex] = helper[currentLowIndex];
            ++currentLowIndex;
            ++currentIndex;
        }
        else
        {
            vecToSort[currentIndex] = helper[currentHighIndex];
            ++currentHighIndex;
            ++currentIndex;
        }
    }

    //copy over any remaining bits. Only from low side since if high side remains, it's 
    //already in correct position in main array
    while (currentLowIndex <= lowEndIndex)
    {
        vecToSort[currentIndex] = helper[currentLowIndex];
        ++currentLowIndex;
        ++currentIndex;
    }
}
