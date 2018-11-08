/******************************************************************************
* Implementation of a Node object for graph representations with obejcts/ptrs
******************************************************************************/
#pragma once

#include <unordered_map>

class Node
{
public:
    Node();
    Node(int id);
    ~Node();

    void AddEdge(const Node* toNode, int weight);
    void SetId(int id);
    int GetId() const;
    std::unordered_map<const Node*, int> GetConnections() const;

private:
    std::unordered_map<const Node*, int> _nodeConnections;
    int _nodeId;
};