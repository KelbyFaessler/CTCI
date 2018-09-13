/*
Implement quicksort from scratch that operates on a std::vector.

This is not a problem from CTCI, it's my own practice in learning the algorithm.

Algorithm description:
Divide and conquer algorithm.
1. Pick an array element, called a pivot.
2. Partition the array: Reorder so that all values less than pivot come before pivot. 
All values greater than pivot come after. This is called partitioning. After the 
partition, pivot is in final position.
3. Recursively apply above steps to sub-array of elements less than pivot, same for sub-
array greater than pivot.
Base case of recursion is always array of size zero or one, which is already in order.

Partition schemes:
1. Lomuto partition scheme: typically pick last element as pivot. Easy to understand, but O(n^2) worst
case time when array is already sorted.
2. Hoare partition scheme: 

Cases where quicksort does not perform well:
1. Array that is already sorted O(n^2) (unless algorithm is modified appropriately)
2. Array with many repeated values O(n^2) (unless algorithm is modified appropriately)
3. 

Optimizations:
1. Choice of pivot: instead of choosing the leftmost/rightmost element for pivot, which causes worst 
   case behavior on already sorted arrays, choose pivot as either random element, middle element, or 
   median of first + middle + last elements of partition
2. Repeated elements: when all elements are equal, left partition is empty and right partition has 
   only decreased by 1 means quadratic time to sort array. To solve, partition cand return left and right
   index, where only values less than left and greater than right are sorted. Values in between left
   and right are equal to pivot and therefore already sorted, so they can be ignored.
3. To make sure at most O(log n) space is used, recurse first into the smaller side of partition, then 
   use a tail call to recurse into other side.
4. When number of elements is below some threshold (say 10 elements), switch to non-recursive algorithm
   (e.g. insertion sort) that makes fewer swaps, comparisons, and other operations on smaller arrays

To find version to study, look at standard library implementations.
E.g. qsort from C standard library
*/

#include <iostream>
#include <string>
#include <vector>

#include "utils.h"
#include "quicksort1.h"
#include "quicksortCTCI.h"
#include "quicksortLom.h"


int main(int argc, char* argv[])
{
    //create vectors to sort
    std::vector<int> vec1 = { 4, 7, 5, 3, 10, 1, 9 };  //odd num elements
    std::vector<int> vec2 = { 4, 3, 7, 5, 3, 10, 1, 3, 9 };  //same, but multiple instances of first pivot val

    std::vector<int> vec3 = { 4, 55, 1, 78, 23, 34, 66, 29 }; //even num elements

    outputVector(vec1, "Original vector 1: ");

    //perform sort
    //quicksort1(vec1, 0, vec1.size() - 1);
    //quicksortCTCI(vec1, 0, vec1.size() - 1);
    quicksortLom(vec1, 0, vec1.size() - 1);
    //quicksortLomStd(vec1, 0, vec1.size() - 1);
    //quicksort(vec2, 0, vec2.size() - 1);

    //print results
    outputVector(vec1, "First  vector sorted: ");

    outputVector(vec2, "Original vector 2: ");
    quicksortLom(vec2, 0, vec2.size() - 1);
    outputVector(vec2, std::string("Second vector sorted: "));

    //keep console open
    std::cin.get();

    return 0;
}