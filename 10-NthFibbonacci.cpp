#include<iostream>
using namespace std;

class Fibbonacci{
public:
    int printNthFibboncacci(int n)
    {
        if(n<=1) return n;
        int sum = 0;

        int a=0;
        int b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<=n;i++)
        {
            sum = a+b;            
            cout<<sum<<" ";
            a=b;
            b=sum;
        }
        return sum;
    }
};
int main()
{
    int n;
    cin>>n;
    Fibbonacci f;
    int result =f.printNthFibboncacci(n);
    cout<<endl<<result<<endl;
    return 0;
}