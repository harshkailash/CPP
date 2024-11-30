// maximum subarray sum using Kadane's Algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Kadane
{
public:
    void bruteForce(int a[], int n)
    {
        int maxSum = INT_MIN;
        for (int start = 0; start < n; start++)
        {
            int currSum = 0;
            for (int end = start; end < n; end++)
            {
                currSum += a[end];
                // for (int i = start; i <= end; i++)
                // {
                //     cout << a[i];
                // }
                maxSum = max(currSum, maxSum);
                cout << " ";
            }
        }
        cout << "max subarray sum = " << maxSum << endl;
    }
    void kadanesAlgo(int a[], int n)
    {
        int maxSum = INT_MIN;
        int currSum = 0;
        for (int i = 0; i < n; i++)
        {
            currSum = currSum + a[i];
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        cout << "max subarray sum = " << maxSum << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Kadane k;
    k.kadanesAlgo(arr, n);
    return 0;
}