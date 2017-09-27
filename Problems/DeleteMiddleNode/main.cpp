/*
2.3: Implement an algorithm to delete a node in the middle (i.e any node but)
     the first and last node, not necessarily the exact middle) of a singly
     linked list, given only access to that node.
*/

#include <iostream>

#include "linkedlist.h"

using List::Node;
using List::AppendEnd;
using List::OutputList;

//forward declarations
void DeleteMiddleNode(List::Node* nodeToDelete);


int main(int argc, char* argv[])
{
    Node head = Node(0);
    Node 
    AppendEnd(&head, )

    return 0;
}

void DeleteMiddleNode(Node* nodeToDelete)
{
    if (nodeToDelete == nullptr) return;
    Node* currentNode = nodeToDelete;
    while (currentNode != nullptr)
    {
        if (currentNode->next != nullptr)
        {
            currentNode->data = currentNode->next->data;
            if (currentNode->next->next == nullptr)
            {
                currentNode->next = nullptr;
            }
        }
        currentNode = currentNode->next;
    }
}