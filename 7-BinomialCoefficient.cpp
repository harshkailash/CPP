#include <iostream>
using namespace std;

class BinomialCoefficeint
{
public:
    int factorial(int a)
    {
        int fact = 1;
        for (int i = 2; i <= a; i++)
        {
            fact *= i;
        }
        return fact;
    }
    double BCoefficient(int n, int r)
    {
        return (factorial(n) / (factorial(r) * factorial(n - r)));
    }
};

int main()
{
    int n, r;
    cin >> n >> r;
    BinomialCoefficeint b;

    cout << b.BCoefficient(n, r) << endl;
}