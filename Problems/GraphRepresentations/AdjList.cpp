/******************************************************************************
* Implementation of an adjacency list for practice
******************************************************************************/
#include "AdjList.h"

#include <iostream>

AdjList::AdjList()
{
}

AdjList::~AdjList()
{
}

void AdjList::AddEdge(int fromNode, int toNode, int weight)
{
    if ((nodes.size() - 1) < fromNode)
    {
        nodes.resize(fromNode);
    }

    nodes[fromNode].push_back(std::pair<int, int>(toNode, weight));
}

void AdjList::PrintNodes()
{
    for (int i = 0; i < nodes.size(); ++i)
    {
        //std::vector
        //std::cout << "Connections to "
        //for (const auto& pr : egdes)
        //{
        //    std::cout << ""
        //}
    }
}
