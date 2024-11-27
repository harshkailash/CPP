#include <iostream>
using namespace std;

class FunctionCall
{
public:
    int sum(int a, int b)
    {
        a = a + 10;
        b = b + 10;
        return a + b;
    }
};

int main()
{
    FunctionCall f;
    int a, b;
    cin >> a >> b;

    // PASS By Value
    cout << f.sum(a, b) << endl;
    cout << a; // this will return the value of a defined in the main function and not in the sum so it means that a in main and a in sum are assigned at two different memory locations.
    cout << b;
}