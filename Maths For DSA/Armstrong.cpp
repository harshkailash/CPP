#include <iostream>
#include <vector>
using namespace std;

bool isArmstrong(int &n)
{
    int m = n;
    int dig, sum = 0;
    while (m > 0)
    {
        dig = m % 10;
        sum += (dig * dig * dig);
        m /= 10;
    }
    return (sum == n);
}

int main()
{
    int a = 153;
    if (isArmstrong(a))
        cout << "is Armstrong number \n";
    else
        cout << "not Armstrong number \n";
    return 0;
}