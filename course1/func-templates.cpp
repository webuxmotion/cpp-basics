#include <iostream>
#include <iterator>

using namespace std;

template <typename T>
void print_arr(T* arr, int len)
{
    for (int i = 0; i < len; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 4, 6, -3, 0 };
    int length = sizeof(arr1) / sizeof(arr1[0]);
    print_arr<int>(arr1, length);

    float arr2[] = { 1.5f, 3.4, 48.4 };
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    print_arr<float>(arr2, length2);

    return 0;
}