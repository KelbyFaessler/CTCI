/******************************************************************************
* Implementation of a hash table from scratch for practice
******************************************************************************/
#include "HashTable.h"


//when inserting into vector, use [] operator to control exactly when it resizes
//using push_back or insert allows it to resize automatically

HashTable::HashTable()
{
    int initialInternalCapacity = 10;
    data.resize(initialInternalCapacity);
    hashTableSize = 0;
    hashTableCapacity = initialInternalCapacity;
}

HashTable::HashTable(const HashTable & other)
{
    data = other.data;
    hashTableSize = other.hashTableSize;
    hashTableCapacity = other.hashTableCapacity;
}

HashTable::~HashTable()
{
}

HashTable & HashTable::operator=(const HashTable & other)
{
    data = other.data;
    hashTableSize = other.hashTableSize;
    hashTableCapacity = other.hashTableCapacity;

    return *this;
}

int & HashTable::operator[](const std::string & key)
{
    int index = Hash(key) % hashTableCapacity;
    if (hashTableSize == hashTableCapacity)
    {
        Resize(2 * hashTableCapacity);
    }

    if (!Exists(key))
    {
        //insert new default element when key doesn't already exist
        data[index].push_back(std::pair<std::string, int>(key, 0));
        ++hashTableSize;
    }
    
    return data[index].back().second;
}

bool HashTable::Exists(const std::string & key)
{
    return false;
}



void HashTable::Resize(int newCapacity)
{
    //Copy existing data array to temp location
    //Rehash every value in temp array, insert into new larger array
}

int HashTable::Hash(const std::string & key) const
{
    //perform a different computation on each character of string and sum
    //the results from each character
    return 0;
}

