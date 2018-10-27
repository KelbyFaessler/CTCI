/*
Project to make sure I know basics of selection sort. Probably not terribly important
since it's so inefficient.

Algorithm description: divides container to sort into 2 sublists. Items already sorted and
items to sort. Initially sorted portion is empty. Iterates over unsorted section, finding
smallest item and swapping with first unsorted item, then moves the boundaries of sorted
section up one.

Unique features of selection sort:
1. Generally performs worse than the similar insertion sort
2. In place sort

Time complexity:
Avg: O(n^2)
Worst: O(n^2)
Best: O(n^2)

Space complexity:
Worst: O(1)

*/

#include <iostream>
#include <string>
#include <vector>


int main(int argc, char* argv[])
{
    //Don't actually need anything in main here right now

    //keep console open
    std::cin.get();

    return 0;
}