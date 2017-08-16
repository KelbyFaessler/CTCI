/*
Assume you have a method 'isSubstring' which checks if one word is a substring
of another. Given two strings, s1 and s2, write code to check if s2 is a 
rotation of s1 using only one call to isSubstring (e.g. 'waterbottle' is a
rotation of 'erbottlewat')
*/

#include <iostream>

#include <string>

bool IsRotation(std::string s1, std::string s2);

int main(int argc, char* argv[])
{
    std::string t1str1 = "waterbottle";
    std::string t1str2 = "erbottlewat";
    std::cout << "Test 1: " << IsRotation(t1str1, t1str2) << std::endl;

    std::string t2str1 = "test";
    std::string t2str2 = "fail";
    std::cout << "Test 2: " << IsRotation(t2str1, t2str2) << std::endl;

    std::cin.get();

    return 0;
}

bool IsRotation(std::string s1, std::string s2)
{
    if (s1 == s2) return true;
    if (s1.length() != s2.length()) return false;
    bool rotation = true;
    int startIndex = 0;
    int currentIndex = 0;
    bool startIndexFound = true;
    while (startIndex < s2.length())
    {
        if (s2[startIndex] == s1[0])
        {
            if (startIndex == s2.length() - 1 || currentIndex == s2.length() - 1)
            {
                startIndexFound = true;
                break;
            }
            int indexDiff = currentIndex - startIndex;
            if (s2[currentIndex] == s1[indexDiff])
            {
                ++currentIndex;
            }
            else
            {
                if (currentIndex != s2.length() - 1)
                {
                    ++startIndex;
                    currentIndex = startIndex + 1;
                }
                else
                {
                    startIndexFound = false;
                    break;
                }
            }
        }
        else
        {
            if (startIndex != s2.length() - 1)
            {
                ++startIndex;
                currentIndex = startIndex + 1;
            }
            else
            {
                startIndexFound = false;
                break;
            }
        }
    }
    if (startIndexFound)
    {
        //rotation = isSubstring();
        rotation = s2.find(s2.substr(0, startIndex)) != std::string::npos;
    }
    else
    {
        rotation = false;
    }
    return rotation;
}