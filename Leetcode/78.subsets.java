/*
 * @lc app=leetcode id=78 lang=java
 *
 * [78] Subsets
 */

// @lc code=start

import java.util.*;

class Solution {
    public void getAllSubsets(int[] nums, List<Integer> ans, int i, List<List<Integer>> allSubsets) {
        if (i == nums.length) {
            allSubsets.add(new ArrayList<>(ans));
            return;

        }

        // include

        ans.add(nums[i]);
        getAllSubsets(nums, ans, i + 1, allSubsets);

        // backracking
        ans.remove(ans.size() - 1);

        // exclusion
        getAllSubsets(nums, ans, i + 1, allSubsets);
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> allSubsets = new ArrayList<>();

        List<Integer> ans = new ArrayList<>();

        getAllSubsets(nums, ans, 0, allSubsets);

        return allSubsets;

    }
}
// TC= O(2^n *n)
// @lc code=end
