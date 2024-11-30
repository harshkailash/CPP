#include <iostream>
#include <vector>
using namespace std;

class Search
{
public:
    int linearSearch(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
            }
        }
        return 0;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    Search s;
    cout << "element found at: " << s.linearSearch(nums, target) << endl;
}