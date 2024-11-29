#include<iostream>
using namespace std;

int main()
{
    int a=8, b=4;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(4<<1)<<endl; // a<<b is also a*(2^b)
    cout<<(10>>1)<<endl; // a>>b is also a/(2^b)
    return 0;
}