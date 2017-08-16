/*
Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degress. Can you do this in place?
*/

#include <iostream>

void Rotate90(int** matrix, int size);

int main(int argc, char* argv[])
{
    int** test1;
    test1 = new int*[3];
    for (int i = 0; i < 3; ++i)
    {
        test1[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            test1[i][j] = i;
        }
    }


    Rotate90(test1, 3);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << test1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cin.get();

    return 0;
}

void Rotate90(int** matrix, int size)
{
    int* copy = new int[size * size];
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            copy[(i * size) + j] = matrix[i][j];
        }
    }
    for (int row = 0; row < size; ++row)
    {
        for (int col = 0; col < size; ++col)
        {
            int newrow = col;
            int newcol = (size - 1) - row;
            matrix[newrow][newcol] = copy[row * size + col];
        }
    }
    delete[] copy;
}