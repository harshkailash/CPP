/*
 * @lc app=leetcode id=287 lang=java
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start

// import java.util.HashSet;
// import java.util.Set;

class Solution {
    public int findDuplicate(int[] arr) {
        // Set<Integer> s = new HashSet<>();
        // for (int val : arr) {
        // if (s.contains(val))
        // return val;
        // s.add(val);
        // }
        // return -1;
        // }

        // slow and fast pointer approach

        int slow = arr[0];
        int fast = arr[0];
        do {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (slow != fast);
        slow = arr[0];
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
}
// @lc code=end
