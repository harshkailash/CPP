#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = i;
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > arr[current])
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
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
    selectionSort(arr, arr.size());
    printArray(arr);
    return 0;
}