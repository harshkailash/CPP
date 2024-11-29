#include <iostream>
using namespace std;

class Function
{
public:
    double sum(double a, double b) // parameters
    {
        return (a + b);
    }
    int minOfTwoValues(int a, int b)
    {
        if (a < b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    int sumOfNNumbers(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;
    }
    int factorial(int n)
    {
        int fact = 1;
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    Function obj;
    int minValue = obj.minOfTwoValues(a, b); // arguements - actual value passed to a function

    cout << "minimum value is " << minValue << endl;
}