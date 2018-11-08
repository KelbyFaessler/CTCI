/******************************************************************************
 * Program entry point for testing different graph representations
******************************************************************************/
#include "AdjList.h"
#include "AdjMatrix.h"
#include "Graph.h"
#include "Node.h"

#include <iostream>

int main(int argc, const char* argv[])
{
    //Adjacency list test
    //AdjList adjlist;
    //adjlist.AddEdge(1, 2, 4);
    //adjlist.AddEdge(1, 3, 3);
    //adjlist.AddEdge(3, 4, 12);
    //adjlist.PrintNodes();

    //Adjacency matrix test
    //AdjMatrix AdjMatrix;
    //AdjMatrix.AddEdge(1, 2, 4);
    //AdjMatrix.AddEdge(1, 3, 3);
    //AdjMatrix.AddEdge(3, 4, 12);
    //AdjMatrix.PrintNodes();

    //Create graph class
    Graph graph;
    //Create Node classes and insert into graph (use new operator)
    Node* node1 = new Node();
    node1->SetId(1);
    graph.AddNode(node1);
    graph.SetBeginningNode(node1);

    Node* node2 = new Node();
    node2->SetId(2);
    graph.AddNode(node2);
    node1->AddEdge(node2, 5);
    
    Node* node3 = new Node();
    node3->SetId(3);
    graph.AddNode(node3);
    node1->AddEdge(node3, 4);
    node3->AddEdge(node2, 7);
    
    Node* node4 = new Node();
    node4->SetId(4);
    graph.AddNode(node4);
    node3->AddEdge(node4, 3);

    Node* node5 = new Node();
    node5->SetId(5);
    graph.AddNode(node5);
    node3->AddEdge(node5, 2);

    Node* node6 = new Node();
    node6->SetId(6);
    graph.AddNode(node6);
    node5->AddEdge(node6, 1);
    
    Node* node7 = new Node();
    node7->SetId(7);
    graph.AddNode(node7);
    node5->AddEdge(node7, 1);

    Node* node8 = new Node();
    node8->SetId(8);
    graph.AddNode(node8);
    node2->AddEdge(node8, 2);

    Node* node9 = new Node();
    node9->SetId(9);
    graph.AddNode(node9);
    node2->AddEdge(node9, 3);
    node8->AddEdge(node9, 5);

    Node* node10 = new Node();
    node10->SetId(10);
    graph.AddNode(node10);
    node2->AddEdge(node10, 4);

    //graph.PrintNodesDFS();
    graph.PrintNodesBFS();

    std::cin.get();

    return 0;
}