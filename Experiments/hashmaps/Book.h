/*
Class representing a book for an online library. Used in set/map tests.
*/
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <functional>

class Book
{
private:
    std::string author;
    std::string title;

public:
    Book();
    Book(const std::string& author, const std::string title);
    ~Book();

    void SetAuthor(std::string author);
    void SetTitle(std::string title);

    std::string GetAuthor() const;
    std::string GetTitle() const;
};

inline bool operator==(const Book& lhs, const Book& rhs)
{
    if ((lhs.GetAuthor() == rhs.GetAuthor()) &&
        (lhs.GetTitle() == rhs.GetTitle()))
    {
        return true;
    }
    return false;
}

inline bool operator!=(const Book& lhs, const Book& rhs)
{
    return !operator==(lhs, rhs);
}

inline bool operator<(const Book& lhs, const Book& rhs)
{
    if (lhs.GetTitle() < rhs.GetTitle())
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline bool operator>(const Book& lhs, const Book& rhs)
{
    return operator<(rhs, lhs);
}

inline bool operator<=(const Book& lhs, const Book& rhs)
{
    return !operator>(lhs, rhs);
}

inline bool operator>=(const Book& lhs, const Book& rhs)
{
    return !operator<(lhs, rhs);
}

struct BookHasher
{
    size_t operator()(const Book& obj) const
    {
        return std::hash<std::string>()(obj.GetTitle() + obj.GetAuthor());
    }
};

struct BookComparator
{
    bool operator()(const Book& lhs, const Book& rhs) const
    {
        if ((lhs.GetTitle() == rhs.GetTitle()) && 
            (lhs.GetAuthor() == rhs.GetAuthor()))
        {
            return true;
        }
        return false;
    }
};

#endif // !BOOK_H