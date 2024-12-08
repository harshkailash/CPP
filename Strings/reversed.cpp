#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int st = 0, end = s.size() - 1;
        while (st < end)
        {
            swap(s[st++], s[end--]);
        }
    }
};
int main()
{
    vector<char> ch;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char cha;
        cin >> cha;
        ch.push_back(cha);
    }

    Solution s;
    s.reverseString(ch);
    for (char val : ch)
    {
        cout << val << " ";
    }
    cout << endl;

    string str = "hello harsh";
    reverse(str.begin(), str.end());
    cout << str;
}