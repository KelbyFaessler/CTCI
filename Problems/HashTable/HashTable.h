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
#include <list>
#include <vector>

class HashTable
{
    public:
        HashTable();
        HashTable(const HashTable& other);
        ~HashTable();

        HashTable& operator=(const HashTable& other);
        int& operator[](const std::string& key);
        //no const version of operator[] because it will always insert a value
        //if it doesn't but it also returns a reference, no way to tell when a
        //new value is inserted

        void Insert(const std::string& key, int value);
        bool Exists(const std::string& key);
    private:
        unsigned int hashTableSize;
        unsigned int hashTableCapacity;
        std::vector<std::list<std::pair<std::string, int>>> data;

        void Resize(int newCapacity);
        unsigned int Hash(const std::string& key) const;
};