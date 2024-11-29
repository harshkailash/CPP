#include <iostream>
using namespace std;

class Search
{
public:
    int linearSearch(int arr[], int size, int target)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "enter element " << i << "of array: ";
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    int n, target;
    cout << "enter size of array: " << endl;
    cin >> n;
    cout << "enter the number to be found " << endl;
    cin >> target;
    int a[n];

    Search s;
    cout << "element found at index " << s.linearSearch(a, n, target);
}