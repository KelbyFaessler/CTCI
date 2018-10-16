/******************************************************************************
* Small tests related to const-ness
******************************************************************************/

#include <string>
#include <iostream>

void thirdLetter(const std::string& input)
{
    if (input.length() >= 3)
    {
        std::cout << "Letter: " << input[2] << std::endl;
    }
}

int main(int argc, const char* argv[])
{
    std::string nonConstStr = "Normal";
    thirdLetter(nonConstStr);

    const std::string constStr = "Const";
    thirdLetter(constStr);

    std::cin.get();

    return 0;
}