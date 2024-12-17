/*
 * @lc app=leetcode id=2965 lang=java
 *
 * [2965] Find Missing and Repeated Values
 */

// @lc code=start

import java.util.Set;
import java.util.HashSet;

class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int[] res = new int[2];
        Set<Integer> arr = new HashSet<>();
        int a = 0, b;
        int expSum = 0, actSum = 0;

        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid.length; j++) {
                actSum += grid[i][j];
                if (arr.contains(grid[i][j])) {
                    a = grid[i][j];
                    res[0] = a;
                }
                arr.add(grid[i][j]);
            }
        }
        expSum = (grid.length * grid.length) * (grid.length * grid.length + 1) / 2;
        b = expSum + a - actSum;
        res[1] = b;

        return res;
    }
}
// @lc code=end
