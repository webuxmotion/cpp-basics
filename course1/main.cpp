#include <iostream>

int main()
{
    // setlocale(LC_ALL, "uk");

    // std::cout << "Андріііііівввававацукй\n" << std::endl;

    // ===============================================
    // Змінні в C++
    // https://youtu.be/5MgT9H-y1ZU?si=RL294jPkhrh5c3p1
    // ===============================================

    // int number1;
    // number1 = -1000;

    // std::cout << "Result: " << number1 << "\n";
    // std::cout << number1 << std::endl;

    // number1 = 10;

    // int number2 = 10.5;

    // std::cout << "Result2: " << number2 << "\n";

    // Program
    // int a, b;

    // std::cout << "Enter number 1: ";
    // std::cin >> a;

    // std::cout << "Enter number 2: ";
    // std::cin >> b;

    // std::cout << a << ", " << b << std::endl;

    // ===============================================
    // Data types
    // ===============================================

    unsigned short num1 = 50000;
    int num2 = 5;
    long num3 = 3000;
    float num4 = 5.345345f;
    double num5 = 3.34345;

    bool isBobHappy = false;

    char sym = '4';

    std::cout << sizeof(num1) << std::endl;
    std::cout << sizeof(num2) << std::endl;
    std::cout << sizeof(num3) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(bool) << std::endl;

    std::cout << "short min: 👾" << std::numeric_limits<short>::min() << "\n";
    std::cout << "short max: " << std::numeric_limits<short>::max() << "\n";

    std::cout << "int min: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "int max: " << std::numeric_limits<int>::max() << "\n";

    std::cout << "long min: " << std::numeric_limits<long>::min() << "\n";
    std::cout << "long max: " << std::numeric_limits<long>::max() << "\n";

    std::cout << "float min: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "float max: " << std::numeric_limits<float>::max() << "\n";

    std::cout << "double min: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "double max: " << std::numeric_limits<double>::max() << "\n";

    std::cout << "short max: " << std::numeric_limits<unsigned long>::max() << "\n";

    double x = 0.1 + 0.2;
    std::cout << (x == 0.3) << "\n";
    std::cout << 8'000'000 << "\n";

    // Lesson 4
    // https://youtu.be/TSj_CSb24fw?si=iqwPedu-bytd6inu

    return 0;
}