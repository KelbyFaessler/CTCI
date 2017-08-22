/*
Define basic linked list and associated functionality to use in problems.
*/

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node()
    {
        data = -1;
    }

    Node(int initData)
    {
        data = initData;
    }
};