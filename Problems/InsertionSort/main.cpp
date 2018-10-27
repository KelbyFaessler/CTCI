/*
Project to make sure I know basics of insertion sort. Probably not terribly important
since it's so inefficient.

Algorithm description: starts with an arary of unsorted values. Inserts each value 
individually into the front of the array in the correct sorted position. Start at 
largest value in sorted section, swap with new value and continue swapping until new
value is in correct position.

Unique features of insertion sort:
1. Simple algorithm and implemenation
2. Efficient for small data sets (like other quadratic i.e. O(n^2) sorting algorithms)
3. More efficient in practice than other O(n^2) sorting algorithms i.e. bubble sort and selection sort
3. Stable sorting algorithm
4. In place sort

Time complexity:
Avg: O(n^2)
Worst: O(n^2)
Best: O(n)

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