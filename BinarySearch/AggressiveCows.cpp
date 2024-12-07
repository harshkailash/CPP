/*
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi

Output
For each test case output one integer: the largest minimum distance.

Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isMinDist(vector<int> &arr, int n, int c, int minAllowedDistance) // O(N)
{
    int cow = 1, lastStallpos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastStallpos >= minAllowedDistance)
        {
            cow++;
            lastStallpos = arr[i];
        }
        if (cow == c)
            return true;
    }
    return false;
}

int AggrCow(vector<int> &arr, int n, int c)
{
    sort(arr.begin(), arr.end()); // NlogN
    if (c < 2)
        return -1;
    int st = 1;
    int end = arr[n - 1] - arr[0];
    int ans = -1;

    while (st <= end) // O(log(range)*N)
    {
        int mid = st + (end - st) / 2;

        if (isMinDist(arr, n, c, mid)) // right
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << AggrCow(arr, N, C) << endl;
    return 0;
}