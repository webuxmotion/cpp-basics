#include <iostream>

using namespace std;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;

    // cin >> vowels[5]; // out of bounds
    // cout << vowels[5];

    double hi_temps[]{90.1, 34.8, 34.3, 55.4};

    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_scores [5] {100, 200};

    cout << test_scores[3] << endl;

    cout << "Value of the array name is: " << test_scores << endl;

    return 0;
}