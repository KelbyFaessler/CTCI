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

//-----------------------------------------------------------------------------
//Given the tail of a list, append a Node to the tail that becomes the new
//new tail. Returns the new tail of the list.
Node* ListAppendEnd(Node* tail, Node* newNode)
{
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = nullptr;
    return newNode;
}