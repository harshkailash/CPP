/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);

        // prefix
        for (int i = 1; i < nums.size(); i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        // suffix
        int suffix = 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }
        return ans;
    }
};
// @lc code=end
