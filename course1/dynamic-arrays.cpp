#include <iostream>

using namespace std;

int main()
{
    // int num = 10;

    // std::cout << sizeof(num) << std::endl; // 4 bytes for int num = 10



    int* nums = new int[40] {};

    nums[0] = 44;
    nums[40] = 43;

    cout << nums[40] << endl;

    delete[] nums;

    cout << sizeof(nums) << endl;


    // #9 – Робота з рядками та символами
    // https://youtu.be/CUOJCNH3hS4?si=v8l0HXauj4YB3X-t
    
    return 0;
}