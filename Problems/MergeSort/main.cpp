/*
Implement mergesort from scratch that operates on a std::vector.

This is not a problem from CTCI, it's my own practice in learning the algorithm.

Algorithm description O(nlogn avg time):
Divide and conquer algorithm.
1. Divide unsorted lists into n sublists, each containing 1 element
2. Repeatedly merge sublists to produce new sorted sublists until only 1 remains

Unique features of mergesort:
1. It parallelizes well because of its divide and conquer approach

Time complexity:
Avg: O(nlogn)
Worst: O(nlogn)

Space complexity:
O(n)

Optimizations:
1. Reduce space complexity
2. Reduce number of copies between arrays
3. Natural merge sort: in a bottom up mergesort, take advantage of naturally ocurring runs of
   sorted numbers, making larger runs while the run remains sorted. This can end up using less
   total passes when there are runs of already sorted numbers. Then merge the runs together 
   like normal.

Comparisons to other sorting algorithms:
1. Heapsort has same runtime but only uses O(1) auxilliary space instead of merge sort's O(n)
2. Efficient quicksort implementations generally outperform mergesort
3. Mergesort is a stable sort (elements of equal value maintain relative ordering)
4. Mergesort works on lists
5. Mergesort can be parralelized easily
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