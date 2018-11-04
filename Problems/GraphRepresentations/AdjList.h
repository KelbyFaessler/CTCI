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

    void AddEdge(int fromNode, int toNode, int weight);
    void PrintNodes();

private:
    std::vector<std::vector<std::pair<int, int>>> nodes;
};