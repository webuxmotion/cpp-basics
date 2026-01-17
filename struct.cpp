#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

struct Tree
{
    string name;
    int ages;
    bool is_alive;
    float height;
    Point place;

    void get_info()
    {
        cout << name << ". Height: " << height << ". Ages: " << ages << endl;
    }
};

int main()
{
    Tree oak;
    oak.name = "Дуб";
    oak.ages = 5;
    oak.is_alive = true;
    oak.height = 1.5f;
    oak.place.x = 0;
    oak.place.y = -1;

    Tree spruce;
    spruce.name = "Ялинка";
    spruce.ages = 6;
    spruce.is_alive = true;
    spruce.height = 2.0f;
    spruce.place.x = 5;
    spruce.place.y = -2;

    oak.get_info();
    spruce.get_info();

    return 0;
}