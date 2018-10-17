/******************************************************************************
* Implementation of a hash table from scratch for practice
******************************************************************************/
#include "HashTable.h"

HashTable::HashTable()
{
    int initialInternalCapacity = 10;
    data.reserve(initialInternalCapacity);
    hashTableSize = 0;
    hashTableCapacity = initialInternalCapacity;
}

//when inserting into vector, use [] operator to control exactly when it resizes
//using push_back or insert allows it to resize automatically