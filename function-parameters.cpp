#include <iostream>

using namespace std;

void param_test(int formal);

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main()
{
    // int actual{50};
    // cout << actual << endl;
    // param_test(actual);
    // cout << actual << endl;

    // int num {10};
    // pass_by_value1(10);
    // cout << num << endl;

    // string name {"Frank"};
    // cout << name << endl;
    // pass_by_value2(name);
    // cout << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    print_vector(stooges);
    pass_by_value3(stooges);
    print_vector(stooges);

    return 0;
}

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed!";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s : v)
    {
        cout << s << " ";
    }

    cout << endl;
}

void param_test(int formal)
{
    cout << formal << endl;
    formal = 100;
    cout << formal << endl;
}