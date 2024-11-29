// write a program to print reverse of a number

#include<iostream>
#include<cmath>
using namespace std;

class revOfNumber
{
public:
    int ReverseOfNumber(int n)
    {
        int revNum=0;
        int rem;
        int m=n;
        while(m>0)
        {
            rem++;
            m=m/10;
        }
        int power=rem;
        while(n>0)
        {
            int remainder= n%10;
            n/=10;
            revNum+= remainder*pow(10,(power-1));
            power --;
        }
        return revNum;
    }
};

int main()
{
    int n;
    cin>>n;
    revOfNumber r;
    cout<<r.ReverseOfNumber(n);
}