/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) // O(1)
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        int windowSize= s1.length();
        for(int i=0; i<s2.length(); i++)
        {
            int windowIdx=0, origIdx=i;
            int windFreq[26]={0};
            while(windowIdx < windowSize && origIdx < s2.length())
            {
                windFreq[s2[origIdx]-'a'] ++;
                windowIdx++; origIdx++;
            }

            if(isFreqSame(freq, windFreq))
                return true;
        }
        return false;
    }
};
// @lc code=end

