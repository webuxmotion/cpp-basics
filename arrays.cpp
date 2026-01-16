#include <iostream>

using namespace std;

int main()
{
    // const int arrSize = 10;
    // int nums[arrSize] = {};
    // nums[0] = 4;

    // for (int i = 0; i < arrSize; i++) {
    //     cout << nums[i] << endl;
    // }

    // int nums[4];
    // int total = 0;
    // int min;
    // int max;

    // for (int i = 0; i < 4; i++) {
    //     cout << "Enter number: ";
    //     cin >> nums[i];
    // }

    // for (int i = 0; i < 4; i++) {
    //     total += nums[i];
    //     if (i == 0) {
    //         min = nums[i];
    //         max = nums[i];
    //     } else {
    //         if (nums[i] < min) min = nums[i];
    //         if (nums[i] > max) max = nums[i];
    //     }
    // }

    // for (int i = 0; i < 4; i++) {
    //     cout << "El: " << nums[i] << endl;
    // }

    // cout << "Total: " << total << endl;
    // cout << "Min: " << min << endl;
    // cout << "Max: " << max << endl;

    int matrix[3][2] = {
        {1, 2},
        {3, -45},
        {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            cout << matrix[i][k] << ";";
        }

        cout << endl;
    }

    return 0;
}