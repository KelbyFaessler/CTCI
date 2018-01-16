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

    for (const Book& book : bookSet)
    {
        std::cout << "Book: " << book.GetTitle() << std::endl;
    }

    //provide only hasher (uses default comparator)
    std::unordered_set<Book, BookHasher> usetHasher;
    usetHasher.insert(book1);
    usetHasher.insert(book2);
    usetHasher.insert(book3);

    std::cout << "unordered set with provided hasher:" << std::endl;
    for (const Book& book : usetHasher)
    {
        BookHasher hasher;
        std::cout << "Book: " << book.GetTitle() 
                  << "   Hash: " << hasher(book) 
                  << std::endl;
    }

    //provide hasher and comparator
    std::unordered_set<Book, BookHasher, BookComparator> usetHasherComp;
    usetHasherComp.insert(book1);
    usetHasherComp.insert(book2);
    usetHasherComp.insert(book3);

    std::cout << "unordered set with provided hasher and comparator:" << std::endl;
    for (const Book& book : usetHasher)
    {
        BookHasher hasher;
        std::cout << "Book: " << book.GetTitle()
                  << "   Hash: " << hasher(book)
                  << std::endl;
    }


    //pause console to read output
    std::cin.get();

    return 0;
}