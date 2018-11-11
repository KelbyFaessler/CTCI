/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.

Sources:
https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key
http://www.drdobbs.com/windows/user-defined-hash-functions-for-unordere/231600210?pgno=1
******************************************************************************/
#include "Point3.h"

#include <unordered_map>
#include <functional>
#include <iostream>

Point3::Point3()
    : PointBase()
{
}

Point3::Point3(int initX, int initY)
    : PointBase(initX, initY)
{
}

Point3::~Point3()
{
}

bool Point3::operator==(const Point3 & other) const
{
    bool equal = false;
    if ((getX() == other.getX()) && (getY() == other.getY()))
    {
        equal = true;
    }
    return equal;
}




void Test_Point3()
{
    //Test 1st method inserting/retreiving the following values: (10, 2), (5, 1)
    std::unordered_map<Point3, int, Point3Hasher> map1;
    Point3 p1(10, 2);
    Point3 p2(5, 1);
    map1[p1] = 1;
    map1[p2] = 2;

    for (const auto& pr : map1)
    {
        std::cout << "Point: " << pr.first.getX() << " " << pr.first.getY() << "   Val: " << pr.second << std::endl;
    }

    //Test 2nd method inserting/retreiving the following values: (2, 3), (1, 5)
    std::unordered_map<Point3, int> map2;
    Point3 p3(2, 3);
    Point3 p4(1, 5);
    map2[p3] = 5;
    map2[p4] = 6;

    for (const auto& pr : map2)
    {
        std::cout << "Point: " << pr.first.getX() << " " << pr.first.getY() << "   Val: " << pr.second << std::endl;
    }
}
