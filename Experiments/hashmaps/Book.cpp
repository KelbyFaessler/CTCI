/*
Implementation for Book class. Used in set/map tests.
*/

#include "Book.h"

Book::Book()
    : author("")
    , title("")
{

}

Book::Book(const std::string& authorIn, const std::string titleIn)
    : author(authorIn)
    , title(titleIn)
{

}

Book::~Book()
{

}

void Book::SetAuthor(std::string newAuthor)
{
    if (newAuthor.length() <= 40)
    {
        author = newAuthor;
    }
}

void Book::SetTitle(std::string newTitle)
{
    if (newTitle.length() <= 50)
    {
        title = newTitle;
    }
}

std::string Book::GetAuthor() const
{
    return author;
}

std::string Book::GetTitle() const
{
    return title;
}