#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    // for (int i = 1; i <= 10; i++) {
    //     cout << "Element: " << i << endl;
    // }

    // int j = 0;
    // while (j <= 10) {
    //     cout << "Element: " << j << endl;
    //     j += 2;
    // }

    // int i = 100;
    // do {
    //     cout << "Element: " << i << endl;
    //     i++;
    // } while (i <= 10);

    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0) continue;

    //     if (i == 8) break;

    //     cout << "El: " << i << endl;
    // }

    int rand_num = 1 + rand() % 10;
    bool isProcess = true;
    int user_num;

    do {
        cout << "Enter number from 1 to 10: ";
        cin >> user_num;

        if (user_num != rand_num) {
            cout << "You don't guess number" << endl;
        } else {
            cout << "You win!" << endl;
            isProcess = false;
        }
    } while (isProcess);

    return 0;
}