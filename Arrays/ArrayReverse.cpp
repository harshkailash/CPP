// reverse array with 2nd array

#include <iostream>
using namespace std;

class Reverse
{
public:
    void reverseArray(int a[], int n)
    {
        int revArr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "enter element " << i << " of array: " << endl;
            cin >> a[i];
        }

        cout << "original array is: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++)
        {
            revArr[j] = a[i];
        }

        cout << "reversed array is " << endl;

        for (int i = 0; i < n; i++)
        {
            cout << revArr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];

    Reverse r;
    r.reverseArray(arr, n);
}