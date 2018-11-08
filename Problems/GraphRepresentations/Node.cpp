/******************************************************************************
* Implementation of a Node object for graph representations with obejcts/ptrs
******************************************************************************/
#include "Node.h"

#include <vector>
#include <iostream>

using namespace std;

Node::Node()
    : _nodeId(-1)
{

}

Node::Node(int id)
    : _nodeId(id)
{

}

Node::~Node()
{

}

void Node::AddEdge(const Node* toNode, int weight)
{
    if (toNode != nullptr)
    {
        if (_nodeConnections.find(toNode) == _nodeConnections.end())
        {
            _nodeConnections[toNode] = weight;
        }
        else
        {
            cout << "Error: attempted to insert duplicate node edge" << endl;
        }
    }
    else
    {
        cout << "Error: attempted to insert null node edge" << endl;
    }
}

void Node::SetId(int id)
{
    _nodeId = id;
}

int Node::GetId() const
{
    return _nodeId;
}

std::unordered_map<const Node*, int> Node::GetConnections() const
{
    return _nodeConnections;
}

