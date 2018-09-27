/******************************************************************************
* Description: Implementation functions needed by all mergesort implementations
******************************************************************************/
#include "MergesortBase.h"

void MergesortBase::sort(std::vector<int>& vecToSort)
{
    std::vector<int> helper;
    helper.resize(vecToSort.size());
    mergesort(vecToSort, helper, 0, vecToSort.size() - 1);
}