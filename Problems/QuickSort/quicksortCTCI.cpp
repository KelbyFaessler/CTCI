
#include "quicksortCTCI.h"
#include "utils.h"


void quicksortCTCI(std::vector<int>& arr, int left, int right)
{
    int index = partitionCTCI(arr, left, right);
    if (left < index - 1) //sort left half
    {
        quicksortCTCI(arr, left, index - 1);
    }
    if (index < right) //sort right half
    {
        quicksortCTCI(arr, index, right);
    }
}

int partitionCTCI(std::vector<int>& arr, int left, int right)
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