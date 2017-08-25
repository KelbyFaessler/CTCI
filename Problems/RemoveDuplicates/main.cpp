/*
2.1: Write code to remove duplicates from an unsorted linked list.
     Follow up: how would you solve this problem if a temporary buffer is not allowed?
*/

#include <iostream>

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
        List::AppendEnd(tail, node);
    }

    std::cout << "List elements before removal: ";
    OutputList(head);
    std::cout << std::endl;

    RemoveDups(head);

    std::cout << "List elements after removal: ";
    OutputList(head);
    std::cout << std::endl;

    return 0;
}

void RemoveDups(List::Node* head)
{

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