/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#pragma once

#include "PointBase.h"

#include <functional>

//forward declaration for global test function (to be called from main)
void Test_Point1();


class Point1 : public PointBase
{
public:
    Point1();
    Point1(int initX, int initY);
    ~Point1();

    bool operator==(const Point1& other) const;

private:

};

struct Point1Hasher
{
    size_t operator()(const Point1& p1) const
    {
        return (std::hash<int>()(p1.getX()) ^ (std::hash<int>()(p1.getY()) >> 1));
    }
};

namespace std
{
    template<>
    struct hash<Point1>
    {
        size_t operator()(const Point1& p1) const
        {
            return (std::hash<int>()(p1.getX()) ^ (std::hash<int>()(p1.getY()) >> 1));
        }
    };
}