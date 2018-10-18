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
    std::cout << std::endl;

    Book book1 = Book("Leo Tolstoy", "War and Peace");
    Book book2 = Book("Herman Melville", "Moby Dick");
    Book book3 = Book("William Shakespeare", "Hamlet");

    std::set<Book> bookSet;
    bookSet.insert(book1);
    bookSet.insert(book2);
    bookSet.insert(book3);

    std::cout << "Book objects to work with:" << std::endl;
    for (const Book& book : bookSet)
    {
        std::cout << "Book: " << book.GetTitle() << std::endl;
    }
    std::cout << std::endl;

    //provide only hasher (uses default comparator)
    std::unordered_set<Book, BookHasher> useHasher;
    useHasher.insert(book1);
    useHasher.insert(book2);
    useHasher.insert(book3);

    std::cout << "unordered set with provided hasher:" << std::endl;
    for (const Book& book : useHasher)
    {
        BookHasher hasher;
        std::cout << "Book: " << book.GetTitle() 
                  << "   Hash: " << hasher(book) 
                  << std::endl;
    }
    std::cout << std::endl;

    //provide hasher and comparator
    std::unordered_set<Book, BookHasher, BookComparator> useHasherComp;
    useHasherComp.insert(book1);
    useHasherComp.insert(book2);
    useHasherComp.insert(book3);

    std::cout << "unordered set with provided hasher and comparator:" << std::endl;
    for (const Book& book : useHasher)
    {
        BookHasher hasher;
        std::cout << "Book: " << book.GetTitle()
                  << "   Hash: " << hasher(book)
                  << std::endl;
    }
    std::cout << std::endl;

    size_t letterHash = std::hash<std::string>()("a");
    std::cout << "Hash of \"a\": " << letterHash << std::endl;


    //pause console to read output
    std::cin.get();

    return 0;
}