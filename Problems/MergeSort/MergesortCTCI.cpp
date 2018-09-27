/******************************************************************************
* Description: Implementation of the Mergesort algorithm given in CTCI.
******************************************************************************/
#include "MergesortCTCI.h"

void MergesortCTCI::mergesort(std::vector<int>& vecToSort,
    std::vector<int>& helper,
    int lowIndex,
    int highIndex)
{
    if (lowIndex < highIndex)
    {
        int midIndex = (lowIndex + highIndex) / 2;
        mergesort(vecToSort, helper, lowIndex, midIndex);
        mergesort(vecToSort, helper, midIndex + 1, highIndex);
        merge(vecToSort, helper, lowIndex, midIndex, highIndex);
    }
}

void MergesortCTCI::merge(std::vector<int>& vecToSort,
    std::vector<int>& helper,
    int lowIndex,
    int midIndex,
    int highIndex)
{
    //Copy both halves into helper vector
    for (int i = lowIndex; i <= highIndex; ++i)
    {
        helper[i] = vecToSort[i];
    }

    int helperLeftIndex = lowIndex;
    int helperRightIndex = midIndex + 1;
    int currentIndex = lowIndex;
    //Iterate through helper array. Compare the left and right half, copying back
    //the smaller element from the two halves into the original array
    while (helperLeftIndex <= midIndex && helperRightIndex <= highIndex)
    {
        if (helper[helperLeftIndex] <= helper[helperRightIndex])
        {
            vecToSort[currentIndex] = helper[helperLeftIndex];
            ++helperLeftIndex;
        }
        else
        {
            vecToSort[currentIndex] = helper[helperRightIndex];
            ++helperRightIndex;
        }
        ++currentIndex;
    }

    //Didn't merge all of left side. Get remainder here. Don't need to check for right
    //side because if there is right side remaining, it started at the end of the array
    //so it's already in position!
    while (helperLeftIndex <= midIndex)
    {
        vecToSort[currentIndex] = helper[helperLeftIndex];
        ++helperLeftIndex;
        ++currentIndex;
    }
}
