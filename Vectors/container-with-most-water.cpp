#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution
{
public:
    int BruteForce(vector<int> &height)
    {
        int maxWater = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int width = j - i;
                int length = min(height[i], height[j]);
                int area = length * width;
                maxWater = max(area, maxWater);
            }
        }
        return maxWater;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout << s.BruteForce(height);
}