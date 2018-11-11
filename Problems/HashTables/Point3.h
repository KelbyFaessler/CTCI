/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#pragma once

#include "PointBase.h"

#include <functional>

//forward declaration for global test function (to be called from main)
void Test_Point3();  //<--- TODO: Update this number


class Point3 : public PointBase
{
public:
    Point3();
    Point3(int initX, int initY);
    ~Point3();

    //operator== necessary for hashing
    bool operator==(const Point3& other) const;

private:

};

//create struct that overrides operator()
struct Point3Hasher
{
    size_t operator()(const Point3& p3) const
    {
        return std::hash<int>()(p3.getX()) ^ (std::hash<int>()(p3.getY()) >> 1);
    }
};

//specialize std::hash
namespace std
{
    template<>
    struct hash<Point3>
    {
        size_t operator()(const Point3& p3) const
        {
            return std::hash<int>()(p3.getX()) ^ (std::hash<int>()(p3.getY()) >> 1);
        }
    };
}