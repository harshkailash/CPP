#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initialization 1
    vector<int> vec1 = {1, 2, 3};

    // initialization 2
    vector<int> vec2(5, 0);
    cout << vec2[4] << endl;

    for (int i : vec2)
    {
        cout << i;
    }

    cout << vec1[1];
    cout << endl;
    vector<char> vec3 = {'a', 'b', 'c', 'd', 'e'};

    for (char i : vec3) // for each loop
    {
        cout << i << " " << endl;
    }

    cout << "size of vec3 = " << vec3.size() << endl; // size of vector;

    vector<int> vec; // size is 0
    // push_back
    cout << "size of vec before push_back = " << vec.size() << endl;
    vec.push_back(24);
    vec.push_back(34);
    vec.push_back(44);
    cout << "size of vec after push_back = " << vec.size() << endl;

    // pop_back

    vec.pop_back();
    cout << "size of vec after pop_back = " << vec.size() << endl;

    // front
    cout << vec.front() << endl;
    // back
    cout << vec.back() << endl;

    // at
    cout << vec.at(0) << endl;

    vector<int> vec4;
    vec4.push_back(1);
    vec4.push_back(2);
    vec4.push_back(3);
    cout << vec4.size() << endl;
    cout << vec4.capacity() << endl;
    vec4.push_back(5);
    vec4.push_back(3);
    cout << vec4.size() << endl;
    cout << vec4.capacity() << endl;
    return 0;
}