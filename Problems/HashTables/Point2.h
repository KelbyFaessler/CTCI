/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#pragma once

#include "PointBase.h"

#include <functional>

//forward declarations
void Test_Point2();

class Point2 : public PointBase
{
public:
    Point2();
    Point2(int x, int y);
    ~Point2();

    bool operator==(const Point2& other) const;
};

struct Point2Hasher
{
    size_t operator()(const Point2& p2) const
    {
        return std::hash<int>()(p2.getX()) ^ (std::hash<int>()(p2.getY()) >> 1);
    }
};

namespace std
{
    template<>
    struct hash<Point2>
    {
        size_t operator()(const Point2& p2) const
        {
            return std::hash<int>()(p2.getX()) ^ (std::hash<int>()(p2.getY()) >> 1);
        }
    };
}