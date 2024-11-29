// Square Pattern (for eg. n = 3)
// 1 2 3
// 4 5 6
// 7 8 9

// AND

// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << num << " "; // for number
            // num++; // for number

            cout << ch << " "; // for character
            ch++; // for character
        }
        cout << endl;
    }
    return 0;
}