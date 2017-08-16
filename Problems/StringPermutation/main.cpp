/*Given two strings, write a method to determine if one is a permutation of the other*/

#include <string>
#include <unordered_map>

#include <iostream>

bool Permutation(std::string str1, std::string str2);

int main(int argc, char* argv[])
{
    std::cout << "Is mutation a permutation of permutation: " << Permutation("mutation", "permutation") << std::endl;
    std::cout << "Is fox a permuation of permutation: " << Permutation("fox", "permutation") << std::endl;

    std::cin.get();

    return 0;
}

bool Permutation(std::string str1, std::string str2)
{
    bool permutation = true;
    std::unordered_map<char, int> map;
    for (char c : str2)
    {
        std::unordered_map<char, int>::iterator it = map.find(c);
        if (it != map.end())
        {
            ++(it->second);
        }
        else
        {
            map.insert(std::pair<char, int>(c, 1));
        }
    }
    for (char c : str1)
    {
        std::unordered_map<char, int>::iterator available = map.find(c);
        if (available != map.end())
        {
            if (available->second > 0)
            {
                --(available->second);
            }
            else
            {
                permutation = false;
                break;
            }
        }
        else
        {
            permutation = false;
            break;
        }
    }
    return permutation;
}