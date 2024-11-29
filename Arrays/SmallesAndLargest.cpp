// find smallest and largest number in an array along with their index
#include <iostream>
#include <climits>
using namespace std;

class FindNumber
{
public:
    int findSmallestAndLargest(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = INT_MAX;
        int l = INT_MIN;
        int index_Small = -1;
        int index_Large = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > l)
            {
                l = a[i];
                index_Large = i;
            }
            // l = max(a[i], l);
            if (a[i] < s)
            {
                s = a[i];
                index_Small = i;
            }
            // s = min(a[i], s); // it is the same as if block above
        }
        cout << "Largest number is at index :" << index_Large << endl;
        cout << l << endl;
        cout << "smallest number is at index :" << index_Small << endl;
        return s;
    }
};

int main()
{
    int n;
    cin >> n;
    int marks[n];
    FindNumber f;
    cout << f.findSmallestAndLargest(marks, n) << endl;

    return 0;
}