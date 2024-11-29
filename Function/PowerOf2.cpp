// determine whether a number is power of 2 without using loop

#include<iostream>
using namespace std;

class PowerOf2{
public:
    bool isPowerOf2(int n)
    {
        int count=0;
        while(n>0)
        {
            if((n&1)==1)
            {
                count++;
            }
            n=n>>1;
        }
        if(count == 1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cin>>n;
    PowerOf2 p;
    cout<<p.isPowerOf2(n)<<endl;
}