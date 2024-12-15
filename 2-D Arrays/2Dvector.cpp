#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // all operation that can be performed on 2-D matrix

    // rows => mat.size();
    // col => mat[i].size();

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // dynamic in nature, we can have different size in different rows

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6, 10, 11}, {7, 8, 9}};

    // all operation that can be performed on 2-D matrix

    // rows => mat.size();
    // col => mat[i].size();

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}