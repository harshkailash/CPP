#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a; // storing memory address of variable a

    cout << "address of a " << &a << endl;
    cout << "value of ptr " << ptr << endl;
    cout << "address of ptr " << &ptr << endl;

    // for a float value
    cout << "for a float value" << endl;

    float price = 25.64;
    float *ptr1 = &price;

    cout << "address of price " << &price << endl;
    cout << "value of ptr1 " << ptr1 << endl;
    cout << "address of ptr1 " << &ptr1 << endl;

    // pointer to pointer

    int b = 10;
    int *parentPtr = &b;
    int **childPtr = &parentPtr;

    cout << "address of b " << &b << endl;
    cout << "value of parentPtr " << parentPtr << endl;
    cout << "address of parentPtr " << &parentPtr << endl;
    cout << "value of childPtr " << childPtr << endl;
    cout << "value stored at address a using dereference operator " << *(&a) << endl;
    cout << "value stored at address a using dereference operator on a pointer " << *(ptr) << endl;
    cout << "value stored at address a using dereference operator for a child pointer " << *(childPtr) << endl;
    cout << "value stored at address a using dereference operator for a child pointer two times " << **(childPtr) << endl;

    // NULL pointer

    int **ptr4 = NULL;
    cout << "Null Pointer " << ptr4 << endl;

    return 0;
}