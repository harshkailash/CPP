/*
 * @lc app=leetcode id=18 lang=java
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums); // O(Nlogn)
        List<List<Integer>> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) { // O(n*n*n)
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n;) {
                int p = j + 1;
                int q = n - 1;
                while (p < q) {
                    long sum = (long) nums[i] + (long) nums[j] + (long) nums[p] + (long) nums[q];
                    if (sum < target)
                        p++;
                    else if (sum > target)
                        q--;
                    else // sum == target
                    {
                        ans.add(List.of(nums[i], nums[j], nums[p], nums[q]));
                        p++;
                        q--;
                        while (p < q && nums[p] == nums[p - 1])
                            p++;
                    }
                }
                j++;
                while (j < n && nums[j] == nums[j - 1])
                    j++;
            }
        }
        return ans;
    }
}
// @lc code=end
