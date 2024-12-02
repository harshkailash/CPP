#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5};

    cout << *arr << endl;
    cout << &arr << endl;
    cout << arr << endl;

    // use of addition and subtraction to the pointer can be done in arrays as the memory address of array is contiguous

    cout << arr + 1 << endl;
    cout << *(arr) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    int b = 10;
    int *ptr = &b;
    cout << "addr of b: " << ptr << endl;
    ptr++; // +4 bytes
    cout << "addr of b after incrementing the pointer: " << ptr << " value stored at the location pointer is pointing to is " << *ptr << endl;
    ptr--;
    cout << "addr of b after decrementing the pointer: " << ptr << " value stored at the location pointer is pointing to is " << *ptr << endl;
    ptr += 2; //+8 bytes
    cout << "addr of b after adding 2 to the pointer: " << ptr << " value stored at the location pointer is pointing to is " << *ptr << endl;

    // subtracting two pointers

    int *ptr2;            // 100
    int *ptr1 = ptr2 + 2; // 108

    cout << "subtract ptr1 and ptr2 :" << ptr1 - ptr2 << endl; // 2 as there it can fit only 2 integers
    cout << arr - (arr + 1) << endl;

    // comparing pointers
    int *ptr3;
    int *ptr4;
    cout << ptr3 << endl;
    cout << ptr4 << endl;
    cout << (ptr3 < ptr4) << endl;
}