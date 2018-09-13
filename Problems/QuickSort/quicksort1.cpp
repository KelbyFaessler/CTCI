
#include "quicksort1.h"

#include "utils.h"

//                 index     0  1  2  3  4  5  6
//std::vector<int> vec1 = { 4, 7, 5, 3, 10, 1, 9 };  //odd num elements

//                 index    0   1  2   3   4   5   6   7
//std::vector<int> vec2 = { 4, 55, 1, 78, 23, 34, 66, 29 }; //even num elements


int partition1(std::vector<int>& input, int indexLow, int indexHigh)
{
    int pivot = (indexLow + indexHigh) / 2;

    while (true)
    {
        while (input[indexLow] < input[pivot])
        {
            ++indexLow;
        }

        while (input[indexHigh] > input[pivot])
        {
            --indexHigh;
        }

        if (indexHigh <= indexLow)
        {
            break;
        }
        else
        {
            swap(input[indexLow], input[indexHigh]);
            if (indexLow == pivot)
            {
                pivot = indexHigh; //pivot element moved, adjust pivot int
            }
            else if (indexHigh == pivot)
            {
                pivot = indexLow; //pivot element moved, adjust pivot int
            }
            ++indexLow;
            --indexHigh;
        }
        outputVector(input);
    }


    return pivot;
}

void quicksort1(std::vector<int>& inputArr, int indexLow, int indexHigh)
{
    if (indexLow == indexHigh)
    {
        return;
    }
    int pivotIndex = partition1(inputArr, indexLow, indexHigh);
    if (indexLow < pivotIndex)
    {
        quicksort1(inputArr, indexLow, pivotIndex - 1);
    }
    if (indexHigh > pivotIndex)
    {
        quicksort1(inputArr, pivotIndex + 1, indexHigh);
    }
}