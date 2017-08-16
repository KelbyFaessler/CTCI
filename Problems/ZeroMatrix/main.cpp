/*
Write an algorithm such that if an element in an NxN matrix is 0, it's entire
row and column are set to zero.
*/

#include <iostream>

#include <set>
#include <unordered_set>

void ZeroMatrix(int** matrix, int rows, int cols);

int main(int argc, char* argv[])
{
    int** test1;
    int test1Rows = 3;
    int test2Cols = 4;
    test1 = new int*[test1Rows];
    for (int i = 0; i < test1Rows; ++i)
    {
        test1[i] = new int[test2Cols];
    }
    for (int i = 0; i < test1Rows; ++i)
    {
        for (int j = 0; j < test2Cols; ++j)
        {
            test1[i][j] = i + 1;
        }
    }


    test1[1][2] = 0;

    ZeroMatrix(test1, 3, 4);

    for (int i = 0; i < test1Rows; ++i)
    {
        for (int j = 0; j < test2Cols; ++j)
        {
            std::cout << test1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cin.get();

    return 0;
}

void ZeroRow(int** matrix, int row, int numCols)
{
    for (int col = 0; col < numCols; ++col)
    {
        matrix[row][col] = 0;
    }
}

void ZeroCol(int** matrix, int numRows, int col)
{
    for (int row = 0; row < numRows; ++row)
    {
        matrix[row][col] = 0;
    }
}

void ZeroMatrix(int** matrix, int rows, int cols)
{
    std::set<std::pair<int, int>> zeros;
    //std::unordered_set<std::pair<int, int>> zeros;
    for (int row = 0; row < rows; ++row)
    {
        for (int col = 0; col < cols; ++col)
        {
            if (matrix[row][col] == 0)
            {
                zeros.insert(std::pair<int, int>(row, col));
            }
        }
    }
    for (std::pair<int, int> val : zeros)
    {
        ZeroRow(matrix, val.first, cols);
        ZeroCol(matrix, rows, val.second);
    }
}