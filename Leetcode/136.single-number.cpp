/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int sum = 0;
        for (int val : nums)
        {
            sum ^= val;
        }
        return sum;
    }
};
// @lc code=end
