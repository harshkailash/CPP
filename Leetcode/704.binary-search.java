/*
 * @lc app=leetcode id=704 lang=java
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
    public int BinarySearch(int[] arr, int target, int st, int end) {
        int mid;
        if (st <= end) {
            mid = st + (end - st) / 2;

            if (arr[mid] == target)
                return mid;
            if (arr[mid] < target)
                return (BinarySearch(arr, target, mid + 1, end));
            else
                return (BinarySearch(arr, target, st, mid - 1));
        }
        return -1;
    }

    public int search(int[] arr, int target) {
        int st = 0;
        int end = arr.length - 1;

        return BinarySearch(arr, target, st, end);

    }
}
// @lc code=end
