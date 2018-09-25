/******************************************************************************
* Description: Defines the interface to implement. Multiple versions of 
* quicksort can implement this interface and be tested independently.
******************************************************************************/
#pragma once

#include "SortBase.h"
#include <vector>

class QuicksortBase : public SortBase
{
    public:
        void sort(std::vector<int>& vecToSort); //inherited      

    private:
        virtual void quicksort(std::vector<int>& vecToSort, int lowIndex, int highIndex) = 0;
        virtual int partition(std::vector<int>& vecToSort, int lowIndex, int highIndex) = 0;
};