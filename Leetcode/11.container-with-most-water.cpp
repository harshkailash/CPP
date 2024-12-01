/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int start = 0;
        int end = height.size() - 1;
        int maxWater = 0;
        while (start < end)
        {
            int width = end - start;
            int length = min(height[start], height[end]);
            int area = length * width;
            maxWater = max(area, maxWater);
            if (length == height[end])
                end--;
            else
                start++;
        }
        return maxWater;
    }
};
// @lc code=end
