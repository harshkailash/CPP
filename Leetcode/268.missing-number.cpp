/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        int sumN=n*(n+1)/2;

        for(int i=0;i<n;i++)
        {
            sumN=sumN-nums[i];
        }
        return sumN;
        // int ans;
        // sort(nums.begin(),nums.end());
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(i!=nums[i])
        //     {
        //         ans=i;
        //         return ans;
        //     }
        // }
        // return ans;
    }
};
// @lc code=end

