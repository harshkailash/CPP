#include <iostream>
using namespace std;

class RightTrianglePattern
{
public:
    /*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
    */
    void Pyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // spaces
            for (int j = n - i - 1; j > 0; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= i + 1; k++)
            {
                cout << k;
            }
            for (int l = i; l > 0; l--)
            {
                cout << l;
            }
            cout << endl;
        }
    }

    /*Hollow Diamond Pattern*/

    void HollowDiamond(int n)
    {
        // top part
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
            if (i != 0)
            {
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }
        // bottom part
        for (int i = 0; i < n - 1; i++)
        {
            // spaces
            for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
            }
            cout << "*";

            if (i != n - 2)
            {
                // spaces
                for (int j = 0; j < 2 * (n - i) - 5; j++)
                {
                    cout << " ";
                }

                cout << "*";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    RightTrianglePattern s;
    s.HollowDiamond(n);
    return 0;
}