#include<iostream>
#include<cmath>
using namespace std;

class DecToBin
{
public:
    int dectobin(int decno) //decimal number to binary
    {
        int power=0;
        int binNum=0;
        while(decno > 0)
        {
            int rem = decno%2;
            decno/=2;
            binNum= binNum + (rem * pow(10,power));
            power++;
        }
        return binNum;
    }
    int bintodec(int binno) // binary number
    {
        int decNum=0;
        int power=0;
        while(binno >0)
        {
            int rem = binno%10;
            binno/=10;
            decNum=decNum+(rem*pow(2,power));
            power++;
        }
        return decNum;
    }
};

int main()
{
    int n;
    cin>>n;
    DecToBin d;
    cout<<d.dectobin(n)<<endl;
    cout<<d.bintodec(n);
}