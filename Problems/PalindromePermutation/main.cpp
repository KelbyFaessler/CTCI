/*
Given a string, write a function to check if it is a permutation of a palindrome.
A palindrome is a word or phrase that is the same forwards and backwards. A
permutation is a rearrangement of letters. The palindrome does not need to be
limited to just dictionary words.
*/

#include <string>
#include <unordered_map>
#include <iostream>

bool PalPerm1(std::string inputStr);
bool PalPerm2(const char* inputStr);
bool IsEven(int num);

int main(int argc, char* argv[])
{
    std::string test1 = "tacocat";
    std::string test2 = "test";

    std::cout << "Test 1 result: " << PalPerm1(test1) << std::endl;
    std::cout << "Test 2 result: " << PalPerm1(test2) << std::endl;

    std::cout << std::endl;

    std::cout << "Char* test 1: " << PalPerm2(test1.c_str()) << std::endl;
    std::cout << "char* test 2: " << PalPerm2(test2.c_str()) << std::endl;

    std::cin.get();

    return 0;
}

bool PalPerm1(std::string inputStr)
{
    bool permutation = true;
    std::unordered_map<char, int> charMap;
    for (const char& c : inputStr)
    {
        std::unordered_map<char, int>::iterator it = charMap.find(c);
        if (it != charMap.end())
        {
            (it->second)++;
        }
        else
        {
            charMap.insert(std::pair<char, int>(c, 1));
        }
    }
    int singleCount = 1;
    bool InputEven = IsEven(inputStr.size());
    for (const std::pair<char, int>& entry : charMap)
    {
        if (!IsEven(entry.second))
        {
            if (InputEven)
            {
                permutation = false;
                break;
            }
            else
            {
                --singleCount;
                if (singleCount < 0)
                {
                    permutation = false;
                }
            }
        }
    }
    return permutation;
}

bool PalPerm2(const char* inputStr)
{
    bool permutation = true;
    std::unordered_map<char, int> charMap;
    int strIndex = 0;
    //while (inputStr[strIndex] != '\0')
    //{
    //    std::unordered_map<char, int>::iterator it = charMap.find(inputStr[strIndex]);
    //    if (it != charMap.end())
    //    {
    //        (it->second)++;
    //    }
    //    else
    //    {
    //        charMap.insert(std::pair<char, int>(inputStr[strIndex], 1));
    //    }
    //    ++strIndex;
    //}
    for (int i = 0; inputStr[i] != '\0'; ++i)
    {

    }

    int singleCount = 1;
    bool InputEven = IsEven(strlen(inputStr));
    for (const std::pair<char, int>& entry : charMap)
    {
        if (!IsEven(entry.second))
        {
            if (InputEven)
            {
                permutation = false;
                break;
            }
            else
            {
                --singleCount;
                if (singleCount < 0)
                {
                    permutation = false;
                }
            }
        }
    }
    return permutation;
}

bool IsEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}