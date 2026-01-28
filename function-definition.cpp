#include <iostream>

using namespace std;

const double pi{3.14159};

void say_hello();
void area_circle();
double calc_area_circle(double radius);
void volume_cylinder();
double calc_volume_cylinder(double radius, double height);

int main()
{
    // area_circle();
    volume_cylinder();
    // for (int i{1}; i <= 10; i++)
    // {
    //     cout << i << " - ";
    //     say_hello();
    // }

    return 0;
}

void say_hello()
{
    cout << "Hello" << endl;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}