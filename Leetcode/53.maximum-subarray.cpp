/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Single Number
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currSum = 0;
        int maxSum = INT_MIN;
        for (int val : nums)
        {
            currSum = currSum + val;
            maxSum = max(maxSum, currSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};