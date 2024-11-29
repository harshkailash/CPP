// Square pattern (n=4 for eg.)
//  1234
//  1234
//  1234
//  1234

//   OR

// A B C D
// A B C D
// A B C D
// A B C D

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // no. of lines
    {
        char ch = 'A';
        for (int j = 0; j < n; j++) // what is to be printed --> line started
        {
            // cout << "* ";  // if it is stars
            // cout << j << " "; // if it is number

            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}