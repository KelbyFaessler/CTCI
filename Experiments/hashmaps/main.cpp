/*
Program to play with sets and maps, both ordered and unordered.
*/

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <iostream>

#include "Book.h"

int main(int argc, char* argv[])
{
    std::set<int> ints;
    ints.insert(1);
    ints.insert(2);

    std::cout << "set of ints:" << std::endl;
    for (int i : ints)
    {
        std::cout << "value: " << i << std::endl;
    }

    Book book1 = Book("Leo Tolstoy", "War and Peace");
    Book book2 = Book("Herman Melville", "Moby Dick");
    Book book3 = Book("William Shakespeare", "Hamlet");

    std::set<Book> bookSet;
    bookSet.insert(book1);
    bookSet.insert(book2);
    bookSet.insert(book3);



    return 0;
}