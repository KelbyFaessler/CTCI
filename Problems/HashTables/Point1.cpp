/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.

Sources:
https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key
http://www.drdobbs.com/windows/user-defined-hash-functions-for-unordere/231600210?pgno=1
******************************************************************************/
#include "Point1.h"

#include <unordered_map>
#include <functional>
#include <iostream>

Point1::Point1()
    : PointBase()
{
}

Point1::Point1(int initX, int initY)
    : PointBase(initX, initY)
{
}

Point1::~Point1()
{
}

bool Point1::operator==(const Point1 & other) const
{
    return ((getX() == other.getX()) && 
            (getY() == other.getY()));
}

size_t point1Hash(const Point1& p1)
{
    std::hash<int> intHasher;
    return intHasher(p1.getX()) ^ intHasher(p1.getY());
}

/*
Different methods to use user defined class as hash table key:
You need to define two things: a hash function for the user class, and the == operator
for collisions. 
1. Create a struct with the hash function (override () operator) and define the == 
   operator in the user class
2. Specialize the std::hash template for the user class and define the == operator in
   the user class
*/
void Test_Point1()
{
    //1st method:
    std::unordered_map<Point1, std::string, Point1Hasher> myMapFirst;
    myMapFirst[Point1(10, 2)] = std::string("First");
    myMapFirst[Point1(5, 1)] = std::string("Second");
    std::cout << "First method:" << std::endl;
    for (auto it = myMapFirst.begin(); it != myMapFirst.end(); ++it)
    {
        std::cout << "Point: " << it->first.getX() << " " << it->first.getY() << "  Val: " << it->second.c_str() << std::endl;
    }

    //2nd method:
    std::unordered_map<Point1, std::string> myMapSecond;
    myMapSecond[Point1(2, 3)] = std::string("First");
    myMapSecond[Point1(1, 5)] = std::string("Second");
    std::cout << "Second method:" << std::endl;
    for (auto it = myMapSecond.begin(); it != myMapSecond.end(); ++it)
    {
        std::cout << "Point: " << it->first.getX() << " " << it->first.getY() << "  Val: " << it->second.c_str() << std::endl;
    }
}
