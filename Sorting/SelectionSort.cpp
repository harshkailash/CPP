#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallestIndex=i; //unsorted part starting index
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestIndex])
            smallestIndex=j;
        }
        swap(arr[i],arr[smallestIndex]);
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