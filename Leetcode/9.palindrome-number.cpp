/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int n) {
        int revNum=0;
        int m = n;
        if(n>=0 && n<=9)
        return true;
        while(m!=0)
        {
            int dig = m%10;
            if(revNum>INT_MAX/10 || revNum<INT_MIN/10)
            {
                return 0;
            }
            revNum = (revNum*10) +dig;
            m/=10;
        }
        if(revNum==n && n>0)
        return true;
        return false;
    }
};
// @lc code=end

