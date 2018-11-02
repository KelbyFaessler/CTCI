/******************************************************************************
* Implementation of an adjacency list for practice
******************************************************************************/
#pragma once

#include <vector>

class AdjList
{
public:
    AdjList();
    ~AdjList();

    void AddNode();
    void PrintNodes();

private:
    std::vector<std::vector<int>> nodes;
};