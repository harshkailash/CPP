#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> bruteForce(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++)
        {
            int prod;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j)
                {
                    ans[i] *= nums[j];
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    Solution s;
    vector<int> ans = s.bruteForce(nums);
    for (int val : ans)
    {
        cout << val << " ";
    }
}