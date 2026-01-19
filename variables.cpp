#include <iostream>
#include <string>

using namespace std;

int age{18};

int main()
{
    // cout << "Enter the width of the room: ";
    // int room_width{0};
    // cin >> room_width;

    // cout << "Enter the length of the room: ";
    // int room_length{0};
    // cin >> room_length;

    // cout << "The area of the room is " << room_width * room_length << " square units" << endl;

    // int age{16};
    // cout << age << endl;

    
    cout << "sizeof information" << endl;
    cout << "==================================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;

    cout << "==================================" << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    cout << "==================================" << endl;

    cout << "Minimum values:" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "Maximum values:" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    cout << "sizeof using variables names" << endl;
    int age {21};
    cout << sizeof(age) << endl;

    double weight {75.5};
    cout << sizeof weight << endl;

    return 0;
}