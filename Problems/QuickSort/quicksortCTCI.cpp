/******************************************************************************
* Description: Implementation of the the partitioning scheme for the quicksort
* algorithm given in CTCI (Cracking the Coding Interview). Included is one
* optimization I made: to select the middle element as the pivot rather than
* the first or last. This means performance won't degrade to O(n^2) when the
* array is already sorted or reverse sorted.
*
******************************************************************************/
#include "QuicksortCTCI.h"
#include "Utils.h"

void QuicksortCTCI::quicksort(std::vector<int>& arr, int left, int right)
{
    int index = partition(arr, left, right);
    if (left < index - 1) //sort left half
    {
        quicksort(arr, left, index - 1);
    }
    if (index < right) //sort right half
    {
        quicksort(arr, index, right);
    }
}

int QuicksortCTCI::partition(std::vector<int>& arr, int left, int right)
{
    int pivot = arr[(left + right) / 2];
    while (left <= right)
    {
        //Find element on left that should be on right
        while (arr[left] < pivot) ++left;

        //Find element on right that should be on left
        while (arr[right] > pivot) --right;

        //Swap elements, and move left and right indices
        if (left <= right)
        {
            swap(arr[left], arr[right]);
            ++left;
            --right;
        }
    }
    return left;
}
