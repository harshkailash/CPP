/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchInRow(vector<vector<int>> &matrix, int target, int row)
    {
        int n = matrix[0].size();

        int st = 0, end = n - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (target == matrix[row][mid])
            {
                return true;
            }
            else if (target > matrix[row][mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // BS on total rows
        int m = matrix.size();
        int n = matrix[0].size();

        int stRow = 0, endRow = m - 1;

        while (stRow <= endRow)
        {
            int midRow = stRow + (endRow - stRow) / 2;
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
            {
                // rowFound => BS on this row
                return searchInRow(matrix, target, midRow);
            }
            else if (target >= matrix[midRow][n - 1])
            {
                // down=> right
                stRow = midRow + 1;
            }
            else
            {
                // up=> left
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
// @lc code=end
