#include <iostream>
#include <iterator>

using namespace std;

template <class T1>
class Arrays
{
private:
    int len;
    T1 *arr;

public:
    Arrays(T1 *arr, int len)
    {
        this->len = len;
        this->arr = new T1[len];
        for (int i = 0; i < len; i++)
        {
            *(this->arr + i) = *(arr + i);
        }
    }

    void get()
    {
        for (int i = 0; i < len; i++)
        {
            cout << *(this->arr + i) << " ";
        }
        cout << endl;
    }

    ~Arrays()
    {
        delete[] arr;
    }
};

int main()
{
    int arr1[] = { 3, 8, 9 };
    Arrays<int> obj1(arr1, 3);
    obj1.get();

    short arr2[] = { 3, 8, 9 };
    Arrays<short> obj2(arr2, 3);
    obj2.get();

    return 0;
}