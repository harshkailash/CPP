#include <iostream>
using namespace std;

void changeSize(int arr[], int n)
{
    cout << "in function" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    changeSize(a, n);

    cout << "Print in main\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    cout << endl;

    return 0;
}