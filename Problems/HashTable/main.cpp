/******************************************************************************
 * Program entry point for testing my implementation of a hash table
******************************************************************************/

#include "HashTable.h"

#include <iostream>

int main(int argc, const char* argv[])
{
    //insert 10 items into hash table
    //check hash table

    //insert 5 more items, meaning internal array will resize
    //check hash table

    HashTable ht;
    ht[std::string("word")] = 5;
    std::cout << "Value at 'word': " << std::to_string(ht["word"]) << std::endl;

    ht["word"] = 777;
    std::cout << "Value at 'word': " << std::to_string(ht["word"]) << std::endl;

    std::cin.get();

    return 0;
}