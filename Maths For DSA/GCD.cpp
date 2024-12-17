#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int n, int m)
{
    int gcd = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
// Euclids Algorithm
/* gcd(a,b) = gcd(a-b,b) if a>b
              gcd(a,b-a) if b>a */

/* To make it more optimised
gcd(a,b) = gcd(a%b,b) if a>b
           gcd(a,b%a) if b>a*/
int Euclids(int n, int m)
{
    int gcd = 1;
    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }

    if (n == 0)
        return m;
    return n;
}

/*LCM= lowest common multiple
a*b = GCD(a,b) x LCM(a,b)

LCM(a,b) = (axb) / GCD(a,b)

*/

int LCM(int n, int m)
{
    int gcd = GCD(n, m);
    return ((n * m) / gcd);
}

int main()
{
    int a = 20;
    int b = 28;
    int ans = GCD(a, b);
    cout << ans << endl;

    int ans1 = Euclids(a, b);
    cout << ans1 << endl;

    cout << LCM(a, b) << endl;

    return 0;
}