#include <iostream>
using namespace std;
int main()
{
    char str[100];

    // to take user input

    cout << "enter char array: ";
    cin.getline(str, 100);

    cout << str;
    return 0;
}