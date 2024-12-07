/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // brute force //O(NlogN)
        // sort(nums.begin(), nums.end()); // O(NlogN)

        // slightly optimised approach O(N)
        // count number of 0s, 1s nd 2s and overwrite the array
        /*
        for(int i=0;i<n;i++)
        {
        int count0 ++;
        int count1 ++;
        int count2 ++;
        }
        then 3 loops to overwrite the array with count0 count1 count 2 respectively
        */
        // Most optimal solution in a single pass
        // aka Dutch National Flag algorithm used to sort array with O(N) time complexity with single pass

        // using 3 pointers --> low mid and high
        // 0 to low-1 store 0s.  low to mid-1 store 1s.  from mid to high store unsorted element  high+1 to n-1 store 2s.

        int mid = 0;
        int high = nums.size() - 1;
        int low = 0;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
                mid++;
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
// @lc code=end
