#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    str1.append(" ").append(str2);

    str1.pop_back();
    str1.push_back('!');
    str1.resize(5);

    cout << str1 << endl;
    cout << str1.length() << endl;

    cout << pow(2, 3) << endl;
    cout << abs(-30) << endl;
    cout << cos(90) << endl;
    cout << sqrt(16) << endl;

    cout << ceil(2.01f) << endl;
    cout << floor(3.1f) << endl;

    return 0;
}