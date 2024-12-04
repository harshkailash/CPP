/*
There are N books, each ith book has A[i] number of pages.

You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum

-> Each book should be allocated to a student
-> Each student has to be allocated atleast one book
-> Allotment should be in contiguous order

Calculate and return that maximum possible number
Find "min possible" "max pages" value
Return -1 if a valid assignment is not possible
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++) // O(n)
    {
        if (arr[i] > maxAllowedPages)
            return false;

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i];
    }
    int st = 0;
    int end = sum;    // range of possible ans
    while (st <= end) // O(n logN) N is the range
    {
        int mid = (st + (end - st) / 2);
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1; // left
        }
        else
        {
            st = mid + 1; // right
        }
    }
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    vector<int> arr2 = {15, 17, 20};
    int n = 3, m = 2;
    cout << allocateBooks(arr2, n, m);
    return 0;
}