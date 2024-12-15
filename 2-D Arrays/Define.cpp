#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int, int> booleanSearch(int matrix[][3], int rows, int col, int target)
{
    pair<int, int> found;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                found.first = i;
                found.second = j;
                return found;
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int col = 3;

    // input

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // print all element row wise

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Linear Search on 2-D array
    int target = 8;
    // pair<int, int>
    auto res = booleanSearch(matrix, rows, col, target);

    cout << "element found at cell: " << res.first << " , " << res.second;

    return 0;
}