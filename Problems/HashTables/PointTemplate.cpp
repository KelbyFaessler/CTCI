/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.

Sources:
https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key
http://www.drdobbs.com/windows/user-defined-hash-functions-for-unordere/231600210?pgno=1
******************************************************************************/
#include "PointTemplate.h"  //<--- TODO: Update this number

#include <unordered_map>
#include <functional>
#include <iostream>

PointX::PointX()  //<--- TODO: Update this number
    : PointBase()
{
}

PointX::PointX(int initX, int initY)  //<--- TODO: Update this number
    : PointBase(initX, initY)
{
}

PointX::~PointX()  //<--- TODO: Update this number
{
}

//<--- TODO: Add any necessary additional functions


void Test_PointX()  //<--- TODO: Update this number
{
    //Test 1st method inserting/retreiving the following values: (10, 2), (5, 1)

    //Test 2nd method inserting/retreiving the following values: (2, 3), (1, 5)

}
