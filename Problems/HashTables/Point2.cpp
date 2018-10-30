/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
  requiring user defined hashing functions.
******************************************************************************/
#include "Point2.h"

#include <unordered_map>
#include <iostream>

Point2::Point2()
    : PointBase()
{
}

Point2::Point2(int x, int y)
    : PointBase(x, y)
{
}

Point2::~Point2()
{
}

bool Point2::operator==(const Point2 & other) const
{
    bool objsEqual = false;
    if ((getX() == other.getX()) && (getY() == other.getY()))
    {
        objsEqual = true;
    }
    return objsEqual;
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
void Test_Point2()
{
    //1st method:
    std::unordered_map<Point2, std::string, Point2Hasher> myMapFirst;
    myMapFirst[Point2(10, 2)] = std::string("First");
    myMapFirst[Point2(5, 1)] = std::string("Second");
    std::cout << "First method:" << std::endl;
    for (auto it = myMapFirst.begin(); it != myMapFirst.end(); ++it)
    {
        std::cout << "Point: " << it->first.getX() << " " << it->first.getY() << "  Val: " << it->second.c_str() << std::endl;
    }

    //2nd method:
    std::unordered_map<Point2, std::string> myMapSecond;
    myMapSecond[Point2(2, 3)] = std::string("First");
    myMapSecond[Point2(1, 5)] = std::string("Second");
    std::cout << "Second method:" << std::endl;
    for (auto it = myMapSecond.begin(); it != myMapSecond.end(); ++it)
    {
        std::cout << "Point: " << it->first.getX() << " " << it->first.getY() << "  Val: " << it->second.c_str() << std::endl;
    }
}