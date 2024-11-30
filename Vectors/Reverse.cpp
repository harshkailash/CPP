#include <iostream>
#include <vector>
using namespace std;

class Reverse
{
public:
    void rev(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
        cout << "reversed vector in the function is" << endl;

        for (int val : nums)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    cout << "enter vector element" << endl;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout << "vector in the main function before being reversed " << endl;
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    Reverse r;
    r.rev(nums);

    cout << "vector in the main function after being reversed" << endl;
    for (int val : nums)
    {
        cout << val << " ";
    }
}