#include <iostream>

using namespace std;

void divide(float a, float b) {
    if (b == 0.0f) {
        throw(3);
    }
    cout << (a / b) << endl;
}

int main() {
    float num;
    cout << "Enter number: ";
    cin >> num;

    try {
        divide(5.6f, num);
    } catch(int error) {
        if (error == 3) cout << "Divide by zero";
    }

    return 0;
}