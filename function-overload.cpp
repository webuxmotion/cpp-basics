#include <iostream>
#include <iomanip>

using namespace std;

int get_value();
double get_value(double price);

int main()
{
    cout << fixed << setprecision(2);
    cout << get_value(44.3) << endl;

    cout << get_value() << endl;

    return 0;
}

double get_value(double price)
{
    return price * 2;
}

int get_value() {
    return 46;
}