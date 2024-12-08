#include <iostream>
using namespace std;
int main()
{
    string str = "apna college";
    cout << str << endl;
    string str2 = "hello";
    cout << str2 << endl;

    string str3 = str + str2; // concatenation

    cout << str3 << endl;

    cout << (str == str2) << endl;

    cout << (str < str2) << endl; // lexicographical comparision

    cout << str.length() << endl;

    // input
    string str4;
    getline(cin, str4);

    cout << str4 << endl;

    // iterator

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    for (char ch : str)
    {
        cout << ch << " ";
    }

    return 0;
}