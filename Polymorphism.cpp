#include<iostream>
using namespace std;

class Parent{
public:
    void A(){
        cout<<"Hi I am A from parent"<<endl;
    }
    void Multiply(int n){
        cout<<n*n<<endl;
    }
    void Multiply(int a, int b){
        cout<<a*b<<endl;
    }

};

class Child:public Parent{
public:
    void A(){
        cout<<"I am A from Child"<<endl;
    }
};

int main(){
    Child c;
    c.A(); // runtime Polymorphism
    Parent p;
    p.A();  // runtime Polymorphism
    int n;
    cin>>n;
    p.Multiply(n); // compile time
    p.Multiply(n,n); // compile time


    return 0;
}