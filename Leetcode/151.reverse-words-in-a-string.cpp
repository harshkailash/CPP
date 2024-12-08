/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string str)
    {
        string ans = "";
        int n = str.length();

        reverse(str.begin(), str.end());

        for (int i = 0; i < n; i++)
        {
            string word = "";

            while (i < n && str[i] != ' ')
            {
                word += str[i];
                i++;
            }

            reverse(word.begin(), word.end());
            if (word.length() > 0)
                ans += " " + word;
        }
        return ans.substr(1);
    }
};
// @lc code=end
