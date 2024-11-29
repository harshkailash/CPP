// Sum of Digits of a number

#include <iostream>
using namespace std;

class SumOfDigits
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};

int main()
{
    int n;
    cin >> n;
    SumOfDigits obj;
    cout << obj.sumOfDigits(n) << endl;
}