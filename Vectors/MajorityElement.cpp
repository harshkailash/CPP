#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int bruteForce(vector<int> &nums)
    {
        for (int val : nums)
        {
            int freq = 0;
            for (int el : nums)
            {
                if (el == val)
                {
                    freq++;
                }
            }
            if (freq > nums.size() / 2)
            {
                return val;
            }
        }
        return 0;
    }
    int optimisedWithSorting(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int freq = 1;
        int ans = nums[0];
        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                freq++;
            }
            else
            {
                freq = 1;
                ans = nums[i];
            }
            if (freq > nums.size() / 2)
            {
                return ans;
            }
        }

        return ans;
    }
    int MooreVotingAlgo(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int freq = 1;
        int ans = nums[0];
        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                freq++;
            }
            else
            {
                freq = 1;
                ans = nums[i];
            }
            if (freq > nums.size() / 2)
            {
                return ans;
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    cout << s.bruteForce(nums);
}