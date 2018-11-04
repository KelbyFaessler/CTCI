/******************************************************************************
* Implementation of an adjacency matrix for practice
******************************************************************************/
#include "AdjMatrix.h"

#include <iostream>

using namespace std;

AdjMatrix::AdjMatrix()
    : largestNode(0)
{
}

AdjMatrix::~AdjMatrix()
{
}

void AdjMatrix::AddEdge(int fromNode, int toNode, int weight)
{
    int newLargestNode = -1;
    if (fromNode > toNode)
    {
        newLargestNode = fromNode;
    }
    else
    {
        newLargestNode = toNode;
    }

    if (newLargestNode > largestNode)
    {
        largestNode = newLargestNode;
        nodes.resize(largestNode + 1);
        for (int i = 0; i < nodes.size(); ++i)
        {
            nodes[i].resize(largestNode + 1);
        }
    }

    nodes[fromNode][toNode] = weight;
}

void AdjMatrix::PrintNodes()
{
    for (int fromNode = 0; fromNode < nodes.size(); ++fromNode)
    {
        cout << "Connections from node " << fromNode << ": " << endl;
        for (int toNode = 0; toNode < nodes.size(); ++toNode)
        {
            if (nodes[fromNode][toNode] != 0)
            {
                cout << "    (node " << fromNode << ") ---- " << nodes[fromNode][toNode] << " --->(node " << toNode << ")" << endl;
            }
        }
    }
}
