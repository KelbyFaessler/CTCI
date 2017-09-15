/*
2.2: Implement an algorithm to find the Kth to last element of a singly linked
     list.
*/

#include <iostream>
#include <deque>

#include "Linkedlist.h"

List::Node* KthToLast(int k, List::Node* head);

int main(int argc, char* argv[])
{
    List::Node* head = new List::Node(0);
    List::Node* tail = head;
    for (int i = 1; i < 6; ++i)
    {
        List::Node* node = new List::Node(i);
        tail = List::AppendEnd(tail, node);
    }

    std::cout << "List elements: ";
    List::OutputList(head);
    std::cout << std::endl;

    List::Node* kth = KthToLast(2, head);
    std::cout << "2nd to last value: " << kth->data << std::endl;

    std::cin.get();

    return 0;
}

List::Node* KthToLast(int k, List::Node* head)
{
    std::deque<List::Node*> tracker;
    List::Node* currentNode = head;
    while (currentNode != nullptr)
    {
        tracker.push_front(currentNode);
        if (tracker.size() > k)
        {
            tracker.pop_back();
        }
        currentNode = currentNode->next;
    }
    List::Node* retNode = nullptr;
    if (tracker.size() == k)
    {
        retNode = tracker.back();
    }
    return retNode;
}