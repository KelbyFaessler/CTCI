/******************************************************************************
 * Program entry point for testing different graph representations
******************************************************************************/
#include "AdjList.h"

#include <iostream>

int main(int argc, const char* argv[])
{
    //Adjacency list test
    AdjList adjlist;
    adjlist.AddEdge(1, 2, 4);
    adjlist.AddEdge(1, 3, 3);
    adjlist.AddEdge(3, 4, 12);
    adjlist.PrintNodes();

    std::cin.get();

    return 0;
}