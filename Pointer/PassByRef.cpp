#include <iostream>
#include <vector>
using namespace std;

void changeARef(int *ptr) // pass by reference using pointer
{
    *ptr = 100;
}

void changeAAlias(int &a) // pass by ref using alias
{
    a = 1000;
}

void changeA(int a) // pass by value
{
    a = 100;
}

int main()
{
    int a = 10;
    changeA(a);
    cout << "val of a inside main function: " << a << endl;
    changeARef(&a);
    cout << "val of a inside main function after calling function by reference: " << a << endl;
    changeAAlias(a);
    cout << "val of a inside main function after calling function by alias: " << a << endl;

    return 0;
}