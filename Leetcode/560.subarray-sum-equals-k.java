/*
 * @lc app=leetcode id=560 lang=java
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start

import java.util.*;

class Solution {
    public int subarraySum(int[] arr, int k) {
        HashMap<Integer, Integer> m = new HashMap<>();
        int n = arr.length;
        int count = 0;
        int[] prefixSum = new int[n];
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) { // O(n)
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        for (int j = 0; j < n; j++) { // O(n)
            if (prefixSum[j] == k)
                count++;

            int val = prefixSum[j] - k;

            if (m.containsKey(val))
                count += m.get(val);

            if (!m.containsKey(prefixSum[j]))
                m.put(prefixSum[j], 0);
            m.put(prefixSum[j], m.get(prefixSum[j]) + 1);
        }
        return count;
    }
}
// SC = O(n)
// @lc code=end
