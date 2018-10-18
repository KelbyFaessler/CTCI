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
    bool keyAlreadyExists = false;

    int index = Hash(key) % hashTableCapacity;
    
    std::list<std::pair<std::string, int>> list = data[index];
    std::list<std::pair<std::string, int>>::const_iterator it;
    
    for (it = list.begin(); it != list.end(); ++it)
    {
        if ((*it).first == key)
        {
            keyAlreadyExists = true;
        }
    }

    return keyAlreadyExists;
}

void HashTable::Resize(int newCapacity)
{
    //Copy existing data array to temp location
    //Rehash every value in temp array, insert into new larger array
}

unsigned int HashTable::Hash(const std::string & key) const
{
    unsigned int sum = 0;
    for (int i = 0; i < key.size(); ++i)
    {
        sum += key[i] * i;
    }

    return sum;
}

