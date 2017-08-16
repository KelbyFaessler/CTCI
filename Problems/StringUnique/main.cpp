/*
Implement an algorith to determine if a string has all unique characters.
What if you cannot use additional data structures?
*/

#include<string>
#include<unordered_set>
#include<iostream>

bool IsUnique(std::string str);
bool IsUniqueNoDatastructures(std::string str);

int main(int argc, char* argv[])
{
    std::string testStr1 = "one";
    std::string testStr2 = "test test two";

    std::cout << "First test: " << IsUnique(testStr1) << std::endl;
    std::cout << "Second test: " << IsUnique(testStr2) << std::endl;

    std::cout << "First test with 2nd method: " << IsUniqueNoDatastructures(testStr1) << std::endl;
    std::cout << "Second test with 2nd method: " << IsUniqueNoDatastructures(testStr2) << std::endl;

    std::cin.get();

    return 0;
}

bool IsUnique(std::string str)
{
    bool unique = true;
    std::unordered_set<char> set;
    for (int i = 0; i < str.size(); ++i)
    {
        if (set.find(str[i]) != set.end())
        {
            unique = false;
            break;
        }
        else
        {
            set.insert(str[i]);
        }
    }
    return unique;
}

bool IsUniqueNoDatastructures(std::string str)
{
    bool unique = true;
    int count = 0;
    for (unsigned int asciiLetterUpper = 65; asciiLetterUpper <= 90; ++ asciiLetterUpper)
    {
        count = 0;
        for (const char& c : str)
        {
            if (c == asciiLetterUpper)
            {
                ++count;
            }
        }
        if (count > 1)
        {
            unique = false;
            break;
        }
    }
    for (unsigned int asciiLetterLower = 97; asciiLetterLower <= 122; ++asciiLetterLower)
    {
        count = 0;
        for (const char& c : str)
        {
            if (c == asciiLetterLower)
            {
                ++count;
            }
        }
        if (count > 1)
        {
            unique = false;
            break;
        }
    }
    return unique;
}
