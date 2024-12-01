/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestBuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>bestBuy)
            {
                mp=max(mp,prices[i]-bestBuy);
            }
            if(prices[i]<bestBuy)
                bestBuy=prices[i];
        }
        return mp;
    }
};
// @lc code=end

