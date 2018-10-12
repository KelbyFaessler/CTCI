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

int Radixsort::countingsort(std::vector<int>& vecToSort, int digit)
{
    bool continueNextDigit = false;
    std::vector<int> digitValueCounts(10);
    //iterate through vector, looking at specific digit and counting how many times each
    //possible value for that digit appears
    for (int i : vecToSort)
    {
        //move digit value to LSD
        int digitAtLSD = i / digit;

        //extract digit value
        int digitVal = digitAtLSD % 10;

        digitValueCounts[digitVal] += 1;
    }

    //Each value in the array of digit value counts has the number of times that digit value occurred
    //in the vector to sort. Now transform this array to store how many elements in the vector to sort 
    //are less than or equal to each digit value. Do this by adding all previous values plus current value
    for (int i = 0; i < digitValueCounts.size(); ++i)
    {

    }


    return continueNextDigit;
}
