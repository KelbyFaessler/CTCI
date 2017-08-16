/*
There are three types of edits that can be performed on strings: insert a 
character, remove a character, or replace a character. Given two strings,
write a function to check if they are one edit (or zero edits) away.
*/

#include <iostream>

#include <string>

bool OneAway(const std::string& str1, const std::string& str2);

int main(int argc, char* argv[])
{
    std::string test1Str1 = "pale";
    std::string test1Str2 = "ple";
    std::cout << "Test 1: " << OneAway(test1Str1, test1Str2) << std::endl;

    std::string test2Str1 = "pales";
    std::string test2Str2 = "pale";
    std::cout << "Test 2: " << OneAway(test2Str1, test2Str2) << std::endl;

    std::string test3Str1 = "pale";
    std::string test3Str2 = "bale";
    std::cout << "Test 3: " << OneAway(test3Str1, test3Str2) << std::endl;

    std::string test4Str1 = "pale";
    std::string test4Str2 = "bake";
    std::cout << "Test 4: " << OneAway(test4Str1, test4Str2) << std::endl;

    std::cin.get();

    return 0;
}

bool OneAway(const std::string& str1, const std::string& str2)
{
    bool oneAway = true;
    int len1 = str1.size();
    int len2 = str2.size();
    int lenDiff = len1 - len2;
    if (lenDiff > 1 || lenDiff < -1) return false;
    int index1 = 0;
    int index2 = 0;
    int offCount = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (str1[index1] != str2[index2])
        {
            ++offCount;
            if (offCount > 1)
            {
                oneAway = false;
                break;
            }
            if (str1[index1] == str2[index2 + 1])
            {
                ++index2;
            }
            else if (str1[index1 + 1] == str2[index2])
            {
                ++index1;
            }
            else if (str1[index1 + 1] == str2[index2 + 1])
            {
                ++index1;
                ++index2;
            }
            else
            {
                oneAway = false;
                break;
            }
        }
        else
        {
            ++index1;
            ++index2;
        }
    }
    return oneAway;
}