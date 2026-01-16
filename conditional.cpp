#include <iostream>

int main()
{
    // std::cout << "Enter number: ";
    // int user_input = 0;
    // std::cin >> user_input;

    // bool isHappy = true;

    // if (user_input > 5 && !isHappy)
    // {
    //     std::cout << "Yes!" << "\n";

    //     if (user_input > 100)
    //         std::cout << "Number " << user_input << " > then 100" << "\n";
    // }
    // else if (user_input < 0)
    // {
    //     std::cout << "Number less than 0" << "\n";
    // }
    // else
    // {
    //     std::cout << "Number less than 5 or equal 5" << "\n";
    // }

    int a;
    std::cin >> a;

    switch(a) {
        case 5: std::cout << "Number is 5"; break;
        case 8: std::cout << "Number is 8"; break;
        case 10: std::cout << "Number is 10"; break;
        default: std::cout << "Nothing found" << "\n";
    }

    return 0;

    // Уроки C++ для початківців / #5 - Випадкові числа. Розробка Калькулятора
    // https://youtu.be/uKwIf-Rlq_s?si=dqv-FT7bvGL45CJ7
}