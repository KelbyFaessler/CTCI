/*
Answer from solutions in back of book (want to check solution for validity and
my own understanding.

Problem: Implement a function to check if a linked list is a palindrome
*/

#include <iostream>

#include "linkedlist.h"

using List::Node;
using List::AppendEnd;
using List::OutputList;


class HeadAndTail
{
public:
    Node* head;
    Node* tail;
    HeadAndTail(Node* h, Node* t) 
    {
        head = h;
        tail = t;
    };
};

HeadAndTail* reverse(Node* head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    HeadAndTail* ht = reverse(head->next);
    Node* clonedHead = new Node(head->data);
    clonedHead->next = nullptr;

    if (ht == nullptr)
    {
        return new HeadAndTail(clonedHead, clonedHead);
    }
    ht->tail->next = clonedHead;
    return new HeadAndTail(ht->head, clonedHead);
}

bool isEqual(Node* one, Node* two)
{
    Node* head1 = one;
    Node* head2 = two;
    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == nullptr && head2 == nullptr;
}

bool isPalindrome(Node* head)
{
    HeadAndTail* reversed = reverse(head);
    Node* reversedHead = reversed->head;
    return isEqual(head, reversedHead);
}


int main(int argc, char* argv[])
{
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = nullptr;

    bool result = isPalindrome(node1);

    return 0;
}