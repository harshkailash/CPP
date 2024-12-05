/*
Given are N boards of length of each given in the form of array, and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.
The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painter = 1;
    int time = 0;
    for (int i = 0; i < n; i++) // O(n)
    {
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m ? true : false;
}

int painterPartition(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    int sum = 0;
    int ans = -1;
    int maximum = arr[0];

    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i];
        maximum = max(maximum, arr[i]);
    }
    int st = maximum;
    int end = sum;

    while (st <= end) // O(log(sum))  ==> O(nlog(sum))
    {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) // O(n)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << painterPartition(arr, n, m);
}