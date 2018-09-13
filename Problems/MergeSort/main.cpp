/*
Implement quicksort from scratch that operates on a std::vector.

This is not a problem from CTCI, it's my own practice in learning the algorithm.

Algorithm description O(nlogn avg time):
Divide and conquer algorithm.
1. Divide unsorted lists into n sublists, each containing 1 element
2. Repeatedly merge sublists to produce new sorted sublists until only 1 remains

Comparisons to other sorting algorithms:
1. Heapsort has same runtime but only uses O(1) auxilliary space instead of merge sort's O(n)
2. Efficient quicksort implementations generally outperform mergesort
3. Mergesort is a stable sort (elements of equal value maintain relative ordering)
*/

#include <iostream>
#include <string>
#include <vector>

int partition(std::vector<int>& input, int indexLow, int indexHigh);
void outputVector(std::vector<int>& input, std::string& title);
void swap(int& i, int& j);

void TopDownMerge(std::vector<int>& bufferVec, int indexBegin, int indexMid, int indexEnd, std::vector<int>& input)
{
    int i = indexBegin;
    int j = indexMid;

    for (int k = indexBegin; k < indexEnd; k++)
    {
        if ()
        {

        }
        else
        {

        }
    }
}

void TopDownSplitMerge(std::vector<int>& bufferVec, int indexBegin, int indexEnd, std::vector<int>& input)
{
    //base case, array size == 1
    if (indexEnd - indexBegin < 2)
    {
        return;
    }


}

void TopDownMergeSort(std::vector<int>& input)
{
    std::vector<int> bufferVec(input);
    TopDownSplitMerge(bufferVec, 0, bufferVec.size(), input);
}

void outputVector(std::vector<int>& input, std::string& title)
{
    std::cout << title;
    for (int elem : input)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    //create vectors to sort
    std::vector<int> vec1 = { 10, 4, 5, 3, 7, 9, 1 };  //odd num elements
    std::vector<int> vec2 = { 4, 55, 1, 78, 23, 34, 66, 29 }; //even num elements

                                                              //perform sort
    quicksort(vec1, 0, vec1.size() - 1);
    //quicksort(vec2, 0, vec2.size() - 1);

    //print results
    outputVector(vec1, std::string("First  vector: "));
    //outputVector(vec2, std::string("Second vector: "));

    //keep console open
    std::cin.get();

    return 0;
}