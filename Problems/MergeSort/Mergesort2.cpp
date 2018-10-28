/******************************************************************************
* Description: Implementation of the mergesort algorithm; practice attempt #2.
******************************************************************************/
#include "Mergesort2.h"
#include "Utils.h"

void Mergesort2::mergesort(std::vector<int>& vecToSort, std::vector<int>& helper, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int lowEndIndex = (lowIndex + highIndex) / 2;
        mergesort(vecToSort, helper, lowIndex, lowEndIndex);
        mergesort(vecToSort, helper, lowEndIndex + 1, highIndex);
        merge(vecToSort, helper, lowIndex, lowEndIndex + 1, highIndex);
    }
}

void Mergesort2::merge(std::vector<int>& vecToSort, std::vector<int>& helper, int lowStartIndex, int highStartIndex, int highEndIndex)
{
    for (int i = lowStartIndex; i <= highEndIndex; ++i)
    {
        helper[i] = vecToSort[i];
    }

    int lowEndIndex = highStartIndex - 1;
    int currentLowIndex = lowStartIndex;
    int currentHighIndex = highStartIndex;
    int currentIndex = lowStartIndex;
    while ((currentLowIndex <= lowEndIndex) && (currentHighIndex <= highEndIndex))
    {
        if (helper[currentLowIndex] < helper[currentHighIndex])
        {
            vecToSort[currentIndex] = helper[currentLowIndex];
            ++currentLowIndex;
        }
        else
        {
            vecToSort[currentIndex] = helper[currentHighIndex];
            ++currentHighIndex;
        }
        ++currentIndex;
    }

    //Forgot this final step the first time!
    while (currentLowIndex <= lowEndIndex)
    {
        vecToSort[currentIndex] = helper[currentLowIndex];
        ++currentIndex;
        ++currentLowIndex;
    }
}
