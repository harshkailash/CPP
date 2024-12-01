/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
// moore's voting algorithm
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ans = 0;
        int freq = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
                ans = nums[i];
            if (ans == nums[i])
                freq++;
            else
                freq--;
        }
        return ans;
    }
};
// @lc code=end
