/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#include "PointBase.h"

PointBase::PointBase()
    : x(0), y(0)
{
}

PointBase::PointBase(int initX, int initY)
    : x(initX), y(initY)
{
}

PointBase::~PointBase()
{
}

int PointBase::getX() const
{
    return x;
}

int PointBase::getY() const
{
    return y;
}
