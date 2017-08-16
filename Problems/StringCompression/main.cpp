/*
Implement a method to perform basic string compression using the coutns of
repeated characters. For example, the string aabcccccaaa would become
a2b1c5a3. If the "compressed" string would not become smaller than the 
original string, your method should return the original string. You can
assume the string has only uppercase and lowercase letters (a-z).
*/

#include <iostream>

#include <sstream>

std::string StringCompression(const std::string& input);

int main(int argc, char* argv[])
{
    std::string test1 = "aabcccccaaa";
    std::cout << "Test should be 'a2b1c5a3': " << StringCompression(test1) << std::endl;

    std::string test2 = "abcd";
    std::cout << "Test should be 'abcd': " << StringCompression(test2) << std::endl;

    std::cin.get();

    return 0;
}

std::string StringCompression(const std::string& input)
{
    std::stringstream stream;
    int count = 0;
    int originalLen = input.size();
    for (int i = 0; i < originalLen; ++i)
    {
        ++count;
        if (i != originalLen - 1)
        {
            if (input[i] != input[i + 1])
            {
                stream << input[i] << count;
                count = 0;
            }
        }
        else
        {
            stream << input[i] << count;
        }
    }
    std::string compressed = stream.str();
    if (compressed.size() < originalLen)
    {
        return compressed;
    }
    else
    {
        return input;
    }
}