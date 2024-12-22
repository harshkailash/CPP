/*
 * @lc app=leetcode id=90 lang=java
 *
 * [90] Subsets II
 */

// @lc code=start

import java.util.*;

class Solution {
    public void getSubsets(int[] arr, List<Integer> ans, int i, List<List<Integer>> allSubsets) {
        if (i == arr.length) {
            allSubsets.add(new ArrayList<>(ans));
            return;
        }

        // include
        ans.add(arr[i]);
        getSubsets(arr, ans, i + 1, allSubsets);

        // Backtrack by removing the last element
        ans.remove(ans.size() - 1);

        int idx = i + 1;
        // Skip duplicates
        while (idx < arr.length && arr[idx] == arr[idx - 1])
            idx++;

        // exclude
        getSubsets(arr, ans, idx, allSubsets);

    }

    public List<List<Integer>> subsetsWithDup(int[] arr) {
        // Sort the array to handle duplicates
        Arrays.sort(arr); // O(nlogn)
        List<List<Integer>> allSubsets = new ArrayList<>();

        List<Integer> ans = new ArrayList<>();

        getSubsets(arr, ans, 0, allSubsets);
        return allSubsets;
    }
}

// TC = O(nlogn + 2^n*n) => O(2^n*n)
// @lc code=end
