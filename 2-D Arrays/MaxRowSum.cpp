#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;

int getMaxRowSum(int matrix[][4], int rows, int col)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < col; j++)
        {
            rowSumI += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;
}
int primarySecondaryDiagonalSum(int matrix[][4], int rows)
{
    int DiagonalSum = 0;
    for (int i = 0; i < rows; i++)
    {
        DiagonalSum += matrix[i][i];
        if (i != rows - i - 1)
            DiagonalSum += matrix[i][rows - i - 1];
    }
    return DiagonalSum;
}

int main()
{
    int rows = 4;
    int col = 4;
    int matrix[4][4];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << getMaxRowSum(matrix, rows, col) << endl;
    cout << primarySecondaryDiagonalSum(matrix, rows) << endl;

    return 0;
}