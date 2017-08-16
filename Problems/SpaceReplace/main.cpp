/*
Write a method to replace all spaces in a string with '%20'. You may assume that
the string has sufficient space at the end to hold the additional characters, and
that you are given the "true" length of the string. Note: if implementing in Java
(or C++) please use a character array so that you can perform this operation in
place.
*/

#include <string>
#include <sstream>
#include <iostream>

std::string Urlify1(const std::string url);
std::string Urlify2(const std::string url);
void Urlify3(char* url, int length);

int main(int argc, char* argv[])
{
    std::string url = "one two thr";
    std::cout << "Urlify1: " << Urlify1(url) << std::endl;

    std::cout << "Urlify2: " << Urlify2(url) << std::endl;

    char url3[16] = { 'o', 'n', 'e', ' ', 't', 'w', 'o', ' ', 't', 'h', 'r', '\0', '\0' , '\0' , '\0' , '\0' };
    Urlify3(url3, 11);

    std::cout << "Urlify3: " << url3 << std::endl;

    std::cin.get();

    return 0;
}

std::string Urlify1(const std::string url)
{
    std::string newStr = "";
    for (const char c : url)
    {
        if (c != ' ')
        {
            newStr += c;
        }
        else
        {
            newStr += "%20";
        }
    }
    return newStr;
}

std::string Urlify2(const std::string url)
{
    std::stringstream stream;
    for (const char c : url)
    {
        if (c != ' ') 
        {
            stream << c;
        }
        else
        {
            stream << "%20";
        }
    }
    return stream.str();
}

void Urlify3(char* url, int length)
{
    int spaceCount = 0;
    for (int i = 0; i < length; ++i)
    {
        if (url[i] == ' ')
        {
            ++spaceCount;
        }
    }
    int replaceIndex = length + (2 * spaceCount) + 1;
    int copyIndex = length;
    url[replaceIndex] = '\0';
    --replaceIndex;
    while (copyIndex >= 0)
    {
        if (url[copyIndex] != ' ')
        {
            url[replaceIndex] = url[copyIndex];
            --replaceIndex;
            --copyIndex;
        }
        else
        {
            url[replaceIndex] = '0';
            --replaceIndex;
            url[replaceIndex] = '2';
            --replaceIndex;
            url[replaceIndex] = '%';
            --replaceIndex;
            --copyIndex;
        }
    }
}