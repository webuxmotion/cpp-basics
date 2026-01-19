#include <iostream>

using namespace std;

class Person;

class Car
{
private:
    string name;

public:
    Car(string name) {
        this->name = name;
    }
    friend void info_car(Car &car, Person &person);
};

class Person
{
private:
    int age;
    string name;

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    friend void info_car(Car &car, Person &person);
};

void info_car(Car &car, Person &person)
{
    cout << "Person name: " << person.name << ". Car name: " << car.name << endl;
}

int main()
{
    Car car("VW");
    Person person("Andrii", 34);

    info_car(car, person);

    return 0;
}