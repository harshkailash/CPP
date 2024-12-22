/*
 * @lc app=leetcode id=46 lang=java
 *
 * [46] Permutations
 */

// @lc code=start

import java.util.*;

class Solution {
    public void getPerm(int[] nums, int idx, List<List<Integer>> ans) {
        if (idx == nums.length) {
            // Add a copy of nums as a list to the answer
            List<Integer> current = new ArrayList<>();
            for (int num : nums) {
                current.add(num);
            }
            ans.add(current);
            return;
        }
        for (int i = idx; i < nums.length; i++) {
            swap(nums, idx, i);

            getPerm(nums, idx + 1, ans);
            swap(nums, idx, i);
        }
    }

    public void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public List<List<Integer>> permute(int[] nums) {

        List<List<Integer>> ans = new ArrayList<>();

        getPerm(nums, 0, ans);

        return ans;
    }
}

// TC = no. of calls made * work done in each call = O(n! * n)
// @lc code=end
