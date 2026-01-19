#include <iostream>

using namespace std;

int main()
{

    // float num1, num2;

    // std::cout << "Enter number 1: ";
    // std::cin >> num1;

    // std::cout << "Enter number 2: ";
    // std::cin >> num2;

    // char math;
    // std::cout << "Enter math symbol (+, -, *, /): ";
    // std::cin >> math;

    // float someNum = 5;

    // switch (math)
    // {
    // case '+':
    //     std::cout << "Result: " << num1 + num2 << std::endl;
    //     break;
    // case '-':
    //     std::cout << "Result: " << num1 - num2 << std::endl;
    //     break;
    // case '*':
    // {
    //     double result = num1 * num2;
    //     std::cout << "Result: " << result << std::endl;
    //     break;
    // }

    // case '/':
    //     if (num2 == 0.0f)
    //     {
    //         std::cout << "Result: Error" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "Result: " << num1 / num2 << std::endl;
    //     }

    //     break;
    // default:
    //     std::cout << "No matching math operation";
    // }

    // int a = 10;
    // a = a + 5;
    // a += 5;
    // a += 1;
    // a++;

    // int b = 10;
    // int res;
    // res = 10 % 2;

    // cout << res << "\n";

    srand(time(nullptr));

    for (int counter = 0; counter < 1000; counter++)
    {
        int randomNum = 1 + rand() % 20;
        cout << randomNum << endl;
    }
}