/******************************************************************************
* Implementation of a hash table from scratch for practice
*
* Assumptions:
*    The keys are strings
*    The values are ints
*    I'm not going to try and generalize with templates
*    Resize the hash table whenever the number of elements equals the size of array
******************************************************************************/
#pragma once

#include <string>
//#include <vector>

class HashTable
{
    public:
        void Insert(std::string& key, int value);
        int& operator[](const std::string& key);
        const int operator[](const std::string& key) const;

    private:
        int size;
        int capacity;
        //int data[]; do I want a C-style array or a vector?

        void Resize();
};