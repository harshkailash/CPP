/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        long binForm = n;
        if (n < 0)
        {
            x = 1 / x;
            binForm = -binForm;
        }
        double ans = 1;
        while (binForm > 0)
        {
            if (binForm % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};
// @lc code=end
