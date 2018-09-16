/******************************************************************************
* Description: Implementation of the quicksort algorithm; practice attempt #1.
* Included is one optimization I made: to select the middle element as the
* pivot rather than the first or last. This means performance won't degrade to
* O(n^2) when the array is already sorted or reverse sorted.
*
******************************************************************************/
#include "Quicksort1.h"
#include "Utils.h"

//                 index     0  1  2  3  4  5  6
//std::vector<int> vec1 = { 4, 7, 5, 3, 10, 1, 9 };  //odd num elements

//                 index    0   1  2   3   4   5   6   7
//std::vector<int> vec2 = { 4, 55, 1, 78, 23, 34, 66, 29 }; //even num elements


void Quicksort1::quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    if (lowIndex == highIndex)
    {
        return;
    }
    int pivotIndex = partition(vecToSort, lowIndex, highIndex);
    if (lowIndex < pivotIndex)
    {
        quicksort(vecToSort, lowIndex, pivotIndex - 1);
    }
    if (highIndex > pivotIndex)
    {
        quicksort(vecToSort, pivotIndex + 1, highIndex);
    }
}

int Quicksort1::partition(std::vector<int>& vecToSort, int lowIndex, int highIndex)
{
    int pivot = (lowIndex + highIndex) / 2;

    while (true)
    {
        while (vecToSort[lowIndex] < vecToSort[pivot])
        {
            ++lowIndex;
        }

        while (vecToSort[highIndex] > vecToSort[pivot])
        {
            --highIndex;
        }

        if (highIndex <= lowIndex)
        {
            break;
        }
        else
        {
            swap(vecToSort[lowIndex], vecToSort[highIndex]);
            if (lowIndex == pivot)
            {
                pivot = highIndex; //pivot element moved, adjust pivot int
            }
            else if (highIndex == pivot)
            {
                pivot = lowIndex; //pivot element moved, adjust pivot int
            }
            ++lowIndex;
            --highIndex;
        }
        outputVector(vecToSort);
    }

    return pivot;
}
