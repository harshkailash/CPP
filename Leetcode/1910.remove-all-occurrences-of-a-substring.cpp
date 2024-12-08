/*
 * @lc app=leetcode id=1910 lang=cpp
 *
 * [1910] Remove All Occurrences of a Substring
 */

// @lc code=start
class Solution {
public:
    string removeOccurrences(string &str, string &part) {
        while(str.length()>0 && str.find(part)<str.length())
        {
            str.erase(str.find(part),part.length());
        }
        return str;
    }
};
// @lc code=end

