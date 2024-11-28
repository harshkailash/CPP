#include<iostream>
using namespace std;
class Prime{
public:
    bool isPrime(int n)
    {
        bool prime = false;
        for(int i=2;i*i<n;i++){
            if(n%i==0)
            {
                prime=true;
                break;
            }
        }
        return prime;
    }
};

int main(){
    int n;
    cin>>n;
    Prime p;
    bool isPrime = p.isPrime(n);
    if(isPrime==true){
        cout<<"no. is not prime";
    } else {
        cout<<"no. is prime";
    }
}