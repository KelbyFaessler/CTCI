/******************************************************************************
 * Program entry point for testing my implementation of a hash table
******************************************************************************/

#include "HashTable.h"

#include <iostream>

int main(int argc, const char* argv[])
{
    HashTable ht;
    ht[std::string("word")] = 5;
    std::cout << "Value at 'word': " << std::to_string(ht["word"]) << std::endl;

    ht["word"] = 777;
    std::cout << "Value at 'word': " << std::to_string(ht["word"]) << std::endl;

    HashTable ht2(ht);
    std::cout << "Value in 2nd table at 'word': " << std::to_string(ht2["word"]) << std::endl;

    //insert 10 items into hash table
    HashTable ht3;
    ht3["one"] = 6;
    ht3["random"] = 2;
    ht3["bitcoin"] = 9;
    ht3["trek"] = 45456;
    ht3["lightsaber"] = 67;
    ht3["two"] = 6;
    ht3["three"] = 6;
    ht3["dictionary"] = 1;
    ht3["thesaurus"] = 3;
    ht3["eighty"] = 80;

    //check hash table


    //insert 5 more items, meaning internal array will resize
    ht3["ten"] = 10;
    ht3["eleven"] = 11;
    ht3["twelve"] = 12;
    ht3["thirteen"] = 13;
    ht3["fourteen"] = 14;

    //check hash table




    std::cin.get();

    return 0;
}