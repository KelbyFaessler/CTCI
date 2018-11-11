/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#pragma once

#include "PointBase.h"

#include <functional>

//forward declaration for global test function (to be called from main)
void Test_PointX();  //<--- TODO: Update this number


class PointX : public PointBase
{
public:
    PointX();  //<--- TODO: Update this number
    PointX(int initX, int initY);  //<--- TODO: Update this number
    ~PointX();  //<--- TODO: Update this number

    //TODO: Add any necessary functions for hashing

private:

};

//Hash method 1 here

//Hash method 2 here