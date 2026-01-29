#include <iostream>

using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << *score_ptr << endl;
    cout << score << endl;

    cout << "--------------------------" << endl;

    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    *temp_ptr = 400.3;
    cout << *temp_ptr << endl;
    cout << high_temp << endl;
    cout << low_temp << endl;

    cout << "--------------------------" << endl;

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;

    cout << "--------------------------" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> stooges2{"A", "B", "C", "D"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(1) << endl;

    cout << "Stooges: ";
    *vector_ptr = stooges2;
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;

    return 0;
}