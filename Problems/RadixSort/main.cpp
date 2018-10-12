/*
Project to implement radix sort from scratch.

Radix definition: radix is the base of a number. E.g. a hexadecimal number
has a radix of 16.

Radix sort properties:
  -Only works on certain data types (e.g integers, strings)

Radix sort algorithm:
  -Sort all integers by least significant digit
  -Sort all integers by 2nd least significant digit
    ...
  -Sort all integers by most significant digit

  How to sort by digits? Counting sort. Note that the stable sort version
  of counting sort is needed. For example, when sorting on the first digit
  later in the sort you'll need to distinguish between 897 and 107, which 
  happen to have the same first digit.
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