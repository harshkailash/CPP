#include<iostream>
using namespace std;

class Prime{
public:
    void printPrime(int n)
    {
        if(n==0||n==1)
        {
            cout<<"no number uptp entered number is prime";
        }
        else if(n==2){
            cout<<2<<" ";
        }
        else{
            cout<<2<<" ";
            for(int i=3;i<=n;i++)
            {
                bool isPrime=true;
                for(int j=2;j*j<=i;j++)
                {
                    if(i%j==0)
                    {
                        isPrime=false;
                        break;
                    }
                }
                if(isPrime == true)
                {
                    cout<<i<<" ";
                }
            }
        }
    }
};

int main()
{
    int n;
    cin>>n;
    Prime p;
    p.printPrime(n);
}