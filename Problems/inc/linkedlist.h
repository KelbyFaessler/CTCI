/*
Define basic linked list and associated functionality to use in problems.
*/

namespace List
{

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
Node* AppendEnd(Node* tail, Node* newNode)
{
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = nullptr;
    return newNode;
}

//-----------------------------------------------------------------------------
//Output values of the list in order, separated by spaces (use for testing)
void OutputList(Node* head)
{
    List::Node* outputNode = head;
    while (outputNode != nullptr)
    {
        std::cout << outputNode->data << " ";
        outputNode = outputNode->next;
    }
}

} //End namespace List