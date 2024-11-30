// wrote a program to calculate sum and product of all elements in an array
#include <iostream>
#include <climits>
using namespace std;

class SumAndProduct
{
public:
    void sumAndProduct(int a[], int n)
    {
        int sum = 0;
        long int prod = 1;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            prod *= a[i];
        }
        cout << "sum of array = " << sum << endl;
        cout << "product of array = " << prod << endl;
    }
    void swapMaxAndMin(int a[], int n)
    {
        int small = INT_MAX;
        int large = INT_MIN;
        int j, k;
        cout << "array before swapping" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            if (a[i] < small)
            {
                small = a[i];
                j = i;
            }
            if (a[i] > large)
            {
                large = a[i];
                k = i;
            }
        }
        cout << endl;
        swap(a[k], a[j]);
        cout << "array after swapping" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    SumAndProduct s;
    s.swapMaxAndMin(a, n);
    // s.sumAndProduct(a, n);
}
