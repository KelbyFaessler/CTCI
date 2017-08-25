/*
2.1: Write code to remove duplicates from an unsorted linked list.
     Follow up: how would you solve this problem if a temporary buffer is not allowed?
*/

#include <iostream>
#include <set>

#include "linkedlist.h"

void RemoveDups(List::Node* head);
void OutputList(List::Node* head);

int main(int argc, char* argv[])
{
    List::Node* head = new List::Node(0);
    List::Node* tail = head;
    for (int i = 1; i < 4; ++i)
    {
        List::Node* node = new List::Node(i);
        tail = List::AppendEnd(tail, node);
        List::Node* secondNode = new List::Node(i);
        tail = List::AppendEnd(tail, secondNode);
    }

    std::cout << "List elements before removal: ";
    OutputList(head);
    std::cout << std::endl;

    RemoveDups(head);

    std::cout << "List elements after removal: ";
    OutputList(head);
    std::cout << std::endl;

    std::cin.get();

    return 0;
}

void RemoveDups(List::Node* head)
{
    if (head == nullptr) return;
    std::set<int> foundDataValues;
    List::Node* currentNode = head;
    while (currentNode != nullptr)
    {
        if (foundDataValues.find(currentNode->data) != foundDataValues.end())
        {
            List::Node* nodeToDelete = currentNode;
            currentNode = currentNode->next;
            if (nodeToDelete->prev)
            {
                nodeToDelete->prev->next = nodeToDelete->next;
            }
            if (nodeToDelete->next != nullptr)
            {
                nodeToDelete->next->prev = nodeToDelete->prev;
            }
            delete nodeToDelete;
        }
        else
        {
            foundDataValues.insert(currentNode->data);
            currentNode = currentNode->next;
        }
    }
}

void OutputList(List::Node* head)
{
    List::Node* outputNode = head;
    while (outputNode != nullptr)
    {
        std::cout << outputNode->data << " ";
        outputNode = outputNode->next;
    }
}