/******************************************************************************
* Implementation of a graph class, which will hold the master list of graph
* node objects. Practice implementation for (directed, weighted) graph 
* representation using objects and pointers
******************************************************************************/
#include "Graph.h"

#include <iostream>
#include <stack>
#include <queue>
#include <unordered_set>

Graph::Graph()
    : _beginningSearchNode(nullptr)
{
}

Graph::~Graph()
{
    for (Node* node : _nodes)
    {
        delete node;
        node = nullptr;
    }
}

void Graph::AddNode(Node * node)
{
    if (_nodes.find(node) == _nodes.end())
    {
        _nodes.insert(node);
    }
}

void Graph::AddEdge(Node* fromNode, Node* toNode, int weight)
{
    fromNode->AddEdge(toNode, weight);
    if (_nodes.find(fromNode) == _nodes.end())
    {
        _nodes.insert(fromNode);
    }
}

void Graph::SetBeginningNode(Node * begin)
{
    if (begin != nullptr)
    {
        _beginningSearchNode = begin;
    }
}

void Graph::PrintNodesDFS()
{
    std::stack<const Node*> remainingNodes;
    if (_beginningSearchNode != nullptr)
    {
        remainingNodes.push(_beginningSearchNode);
    }

    std::unordered_set<const Node*> visitedNodes;

    while (!remainingNodes.empty())
    {
        const Node* next = remainingNodes.top();
        remainingNodes.pop();

        if (visitedNodes.find(next) == visitedNodes.end())
        {
            std::cout << "Node " << next->GetId() << " visited. Connections:" << std::endl;

            std::unordered_map<const Node*, int> nodeConnections = next->GetConnections();
            for (const auto& nodePair : nodeConnections)
            {
                const Node* adjacentNode = nodePair.first;
                std::cout << "    Node" << adjacentNode->GetId() << std::endl;
                remainingNodes.push(adjacentNode);
            }

            visitedNodes.insert(next);
        }
    }
}

void Graph::PrintNodesBFS()
{
    std::queue<const Node*> remainingNodes;
    if (_beginningSearchNode != nullptr)
    {
        remainingNodes.push(_beginningSearchNode);
    }

    std::unordered_set<const Node*> visitedNodes;

    while (!remainingNodes.empty())
    {
        const Node* next = remainingNodes.front();
        remainingNodes.pop();

        if (visitedNodes.find(next) == visitedNodes.end())
        {
            std::cout << "Node " << next->GetId() << " visited. Connections:" << std::endl;

            std::unordered_map<const Node*, int> nodeConnections = next->GetConnections();
            for (const auto& nodePair : nodeConnections)
            {
                const Node* adjacentNode = nodePair.first;
                std::cout << "    Node" << adjacentNode->GetId() << std::endl;
                remainingNodes.push(adjacentNode);
            }

            visitedNodes.insert(next);
        }
    }
}
