// Binary search algorithm using loops --> iterative code
// can only be applied on the sorted array
#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2); // to optimize we can use start+((end-start)/2)
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int tar;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "enter the target to be searched: ";
    cin >> tar;
    cout << BinarySearch(nums, tar);
}
