#pragma once

/*
Lomuto partitioning scheme:


*/

#include <vector>

void quicksortLom(std::vector<int>& vecToSort, int lowIndex, int highIndex);
int partitionLom(std::vector<int>& vecToSort, int lowIndex, int highIndex);

void quicksortLomStd(std::vector<int>& vecToSort, int lowIndex, int highIndex);
int partitionLomStd(std::vector<int>& vecToSort, int lowIndex, int highIndex);