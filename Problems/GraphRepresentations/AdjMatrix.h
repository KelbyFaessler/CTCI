/******************************************************************************
* Implementation of an adjacency matrix for practice
******************************************************************************/
#pragma once

#include <vector>

class AdjMatrix
{
public:
    AdjMatrix();
    ~AdjMatrix();

    void AddEdge(int fromNode, int toNode, int weight);
    void PrintNodes();

private:
    std::vector<std::vector<int>> nodes;
    int largestNode;
};