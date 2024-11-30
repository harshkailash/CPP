#include <iostream>
using namespace std;

class Unique
{
public:
    int printUnique(int a[], int n)
    {
        bool found = false;
        int m;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] != a[j])
                {
                    found = true;
                    m = i;
                    break;
                }
            }
        }
        if (found)
        {
            cout << "unique element is: " << a[m] << endl;
        }
        else
        {
            cout << "unique not found" << endl;
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
    Unique u;
    u.printUnique(a, n);
}