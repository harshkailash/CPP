#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==0||n==1)
    {
        return false;
    }
    //check if a number is prime
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}