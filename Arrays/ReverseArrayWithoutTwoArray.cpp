// reverse array without 2nd array
// two pointer approach
#include <iostream>
using namespace std;

class ReverseArray
{
public:
    void reverseArray(int a[], int n)
    {
        int start = 0;
        int end = n - 1;
        for (int i = 0; i < n; i++)
        {
            cout << "enter element " << i << " of array: " << endl;
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            while (start < end)
            {
                swap(a[start], a[end]);
                start++;
                end--;
            }
        }
        cout << "reversed array is: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
};
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];

    ReverseArray r;
    r.reverseArray(arr, n);
}