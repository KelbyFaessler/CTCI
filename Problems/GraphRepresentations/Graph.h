/******************************************************************************
* Implementation of a graph class, which will hold the master list of graph
* node objects. Practice implementation for (directed, weighted) graph
* representation using objects and pointers
******************************************************************************/
#pragma once

#include "Node.h"

#include <unordered_set>

class Graph
{
public:
    Graph();
    ~Graph();

    void AddNode(Node* node);
    void AddEdge(Node* fromNode, Node* toNode, int weight);
    void SetBeginningNode(Node* begin);
    void PrintNodesDFS();
    void PrintNodesBFS();

private:
    std::unordered_set<Node*> _nodes;
    Node* _beginningSearchNode;
};