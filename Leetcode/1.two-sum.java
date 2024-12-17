/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> arr = new HashMap<>();
        int[] res=new int[2];

        for(int i=0;i<nums.length;i++)
        {
            if(arr.containsKey(target-nums[i]))
            {
                res[0] = arr.get(target-nums[i]);
                res[1] = i;
            }
            arr.put(nums[i], i);
        }
        return res;
    }
}
// @lc code=end

