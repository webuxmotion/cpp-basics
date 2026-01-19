#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    srand(time(nullptr));

    auto start = std::chrono::steady_clock::now();

    int counters[20]{};

    for (int i = 0; i < 1'000'000'000; i++)
    {
        int randomNum = 1 + rand() % 20;
        counters[randomNum - 1]++;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "Number " << i + 1 << ": " << counters[i] << " times" << endl;
    }

    auto end = std::chrono::steady_clock::now();

    auto elapsed_ms =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << elapsed_ms << " ms\n";

    return 0;
}