#include <iostream>
using namespace std;

class RightTrianglePattern
{
public:
    //  *
    //  * *
    //  * * *
    //  * * * *
    void Star(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
    void Number(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
    /*
    A
    B B
    C C C
    D D D D
    */
    void Character(int n, char ch)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << ch << " ";
            }
            ch++;
            cout << endl;
        }
    }
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */
    void Number1(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << j + 1 << " ";
            }
            cout << endl;
        }
    }
    /*Reverse triangle
    1
    2 1
    3 2 1
    4 3 2 1
    */
    void ReverseTriangle(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j > 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    /*Reverse triangle
    A
    B A
    C B A
    D C B A
    */
    void ReverseTriangleCharacter(int n)
    {
        for (int i = 0; i < n; i++)
        {
            char ch = 'A';
            ch += i;
            for (int j = i; j >= 0; j--)
            {
                cout << ch << " ";
                ch--;
            }
            cout << endl;
        }
    }
    /* Floyd's Triangle Pattern
    1
    2 3
    4 5 6
    7 8 9 10
    */
    void FloydsTrianglePattern(int n)
    {
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
    /* Floyd's Triangle Pattern (character version)
    A
    B C
    D E F
    G H I J
    */
    void FloydsTriangleCharacterVersion(int n)
    {
        char ch = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }
    /* Inverted Triangle Pattern
    1 1 1 1
      2 2 2
        3 3
          4
    */
    void InvertedTrianglePattern(int n)
    {
        char ch = ' ';
        for (int i = 0; i < n; i++)
        {
            // spaces
            for (int j = 0; j < i; j++)
            {
                cout << ch;
            }
            // nums
            for (int k = 0; k < n - i; k++)
            {
                cout << i + 1;
            }
            cout << endl;
        }
    }
    /* Inverted Triangle character Pattern
    A A A A
      B B B
        C C
          D
    */
    void InvertedTriangleCharacterPattern(int n)
    {
        char ch = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < n - i; k++)
            {
                cout << ch;
            }
            ch++;
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    RightTrianglePattern s;
    s.InvertedTriangleCharacterPattern(n);
    // s.ReverseTriangleCharacter(n);
    // s.FloydsTriangleCharacterVersion(n);
    // s.FloydsTrianglePattern(n);
    // s.ReverseTriangle(n);
    // s.Number1(n);
    // // s.Star(n);
    // char ch;
    // cin >> ch;
    // s.Character(n, ch);
    return 0;
}