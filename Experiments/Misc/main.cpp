/*
Program for miscellaneous small tests
*/

#include <iostream>

struct TestStruct
{
    int x;
    int y;
};

int main(int argc, char* argv[])
{
    std::pair<int, int> pr(-1, -1);

    TestStruct myStruct;
    myStruct.x = 5;
    myStruct.y = 6;

    std::cout << myStruct.x << std::endl;
    std::cout << myStruct.y << std::endl;

    //Keeps window open to view console output
    std::cin.get();
}