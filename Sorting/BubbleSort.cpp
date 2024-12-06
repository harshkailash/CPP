#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++) // O(n)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++) // O(n*n) = O(n^2)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            return;
    }
}
void printArray(vector<int> &arr)
{
    for (int val : arr)
        cout << val << " ";
}
int main()
{
    vector<int> arr = {5, 2, 3, 1, 4};
    bubbleSort(arr, arr.size());
    printArray(arr);
    return 0;
}