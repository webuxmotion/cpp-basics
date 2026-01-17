#include <iostream>

using namespace std;

class Building
{
protected:
    int year;
    string type;

public:
    Building(int p_year, string p_type) {
        set_data(p_year, p_type);
    }

    Building(string p_type) {
        type = p_type;
    }

    Building() {}

    void set_data(int year, string type) {
        if (year < 0) {
            this->year = 1000;
        } else {
            this->year = year;
        };
        this->type = type;
    }

    void get_info()
    {
        cout << "Type: " << type << ". Year: " << year << endl;
    }

    ~Building() {
        cout << "End of the object" << endl;
    }
};

int main()
{
    Building school(-3, "School");
    school.get_info();

    Building house;
    house.set_data(2001, "Private house");
    house.get_info();

    return 0;
}