/******************************************************************************
* Description: Implementation of the radix sort algorithm.
******************************************************************************/
#include "Radixsort.h"

//see https://codereview.stackexchange.com/questions/203314/c-radix-sort-implementation for 
//explanation on how to not have to use max calculation

void Radixsort::radixsort(std::vector<int>& vecToSort)
{
    int currentDigit = 1;
    bool continueNextDigit = true;
    //perform countsort on each digit, starting as LSD moving to MSD. Stop when values have
    //been sorted on most significant non-zero digit and the vector will be sorted. Use a 
    //radix of 10 because it's easiest to understand and the point of this code is to learn
    //the algorithm
    while (continueNextDigit)
    {
        continueNextDigit = countingsort(vecToSort, currentDigit);
        currentDigit *= 10;
    }
}

bool Radixsort::countingsort(std::vector<int>& vecToSort, int digit)
{
    bool continueNextDigit = false;
    std::vector<int> digitValueCounts(10);
    //iterate through vector, looking at specific digit and counting how many times each
    //possible value for that digit appears
    for (int i : vecToSort)
    {
        //move digit value to LSD
        int digitAtLSD = i / digit;

        if (digitAtLSD != 0)
        {
            continueNextDigit = true;
        }

        //extract digit value
        int digitVal = digitAtLSD % 10;

        digitValueCounts[digitVal] += 1;
    }

    //only perform another sort below if we haven't yet reached the largest digit to sort on
    if (continueNextDigit == false)
    {
        return continueNextDigit;
    }

    //Each value in the array of digit value counts has the number of times that digit value occurred
    //in the vector to sort. Now, transform this array to store how many elements in the vector to sort 
    //are less than or equal to each digit value. Do this by adding all previous values plus current value
    //
    //The reason to perform this transformation is for the stable sort property. If stable sort is not
    //desired/needed, this step can be skipped and the algorithm can be simplified (it will also be different)
    for (int i = 1; i < digitValueCounts.size(); ++i)
    {
        int numAllPrevious = digitValueCounts[i-1];
        int numCurrent = digitValueCounts[i];

        //update the array values
        digitValueCounts[i] = numAllPrevious + numCurrent;
    }

    //After the count array is transformed, a new sorted array can be created using it. Create a copy of the
    //original array, iterate backwards through the copy and for each element, use the counts array to
    //determine where that element belongs in the sorted array. Insert it into the original array in the 
    //proper spot and update the counts array.
    std::vector<int> copyArray(vecToSort);
    for (int i = copyArray.size() - 1; i >= 0; --i)
    {
        //get appropriate digit from array value since we're sorting by a particular digit
        //move digit value to LSD
        int digitAtLSD = copyArray[i] / digit;

        //extract digit value
        int digitVal = digitAtLSD % 10;

        int indexOfElement = digitValueCounts[digitVal] - 1;
        digitValueCounts[digitVal] -= 1;

        //Here is where stable sort property is maintained. If we were sorting objects, the correct object
        //is placed into sorted array here.
        vecToSort[indexOfElement] = copyArray[i];  
    }

    return continueNextDigit;
}
