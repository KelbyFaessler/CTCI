/******************************************************************************
* Implementation of an adjacency list for practice
******************************************************************************/
#include "AdjList.h"

#include <iostream>

using namespace std;

AdjList::AdjList()
{
}

AdjList::~AdjList()
{
}

void AdjList::AddEdge(int fromNode, int toNode, int weight)
{
    int greaterNode = -1;
    if (fromNode > toNode)
    {
        greaterNode = fromNode;
    }
    else
    {
        greaterNode = toNode;
    }
    if (nodes.size() < greaterNode)
    {
        nodes.resize(greaterNode);
    }

    nodes[fromNode].push_back(pair<int, int>(toNode, weight));
}

void AdjList::PrintNodes()
{
    for (int i = 0; i < nodes.size(); ++i)
    {
        cout << "Connections from node " << i << ": " << endl;
        for (const auto& edgePair : nodes[i])
        {
            cout << "    (node " << i << ") ---- " << edgePair.second << " --->(node " << edgePair.first << ")" << endl;
        }
        cout << endl;
    }
}
