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
    Node node1 = Node(1);
    AppendEnd(&head, &node1);
    Node node2 = Node(2);
    AppendEnd(&node1, &node2);
    Node node3 = Node(3);
    AppendEnd(&node2, &node3);
    Node node4 = Node(4);
    AppendEnd(&node3, &node4);

    std::cout << "List before delete: ";
    OutputList(&head);
    std::cout << std::endl;

    DeleteMiddleNode(&node2);

    std::cout << "List after delete: ";
    OutputList(&head);
    std::cout << std::endl;

    std::cin.get();

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