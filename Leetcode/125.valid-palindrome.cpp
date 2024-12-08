/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    // bool isAlphaNumeric(char ch)
    // {
    //     if((ch>='0' && ch<='9') ||(tolower(ch)>='a' && tolower(ch)<='z'))
    //         return true;
    //     return false;
    // }
    bool isPalindrome(string str) {
        int st=0, end=str.length()-1;
        while(st<end)
        {
            if(!isalnum(str[st]))
            { 
                st++; 
                continue;
            }
            if(!isalnum(str[end]))
            { 
                end--; 
                continue;
            } 
            if(tolower(str[st]) != tolower(str[end]))
                return false;

            st++;
            end--;
        }
        return true;
    }
};
// @lc code=end

