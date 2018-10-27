/******************************************************************************
* Description: User defined class to be used in practicing creating hash tables
    requiring user defined hashing functions.
******************************************************************************/
#pragma once

class PointBase
{
public:
    PointBase();
    PointBase(int initX, int initY);
    ~PointBase();

    int getX() const;
    int getY() const;

private:
    int x;
    int y;
};