#include <iostream>

using namespace std;

int main()
{
    const double price_per_small_room{25};
    const double price_per_large_room{35};
    const double tax_percents{6};
    const int estimates_valid_days{30};
    double cost{};
    double tax{};

    cout << "========================" << endl;
    cout << "Andrii's Carpet Cleaning Service" << endl;
    cout << "========================" << endl;
    cout << "===== Prices: =====" << endl;
    cout << "Small room cleaning: $" << price_per_small_room << endl;
    cout << "Large room cleaning: $" << price_per_large_room << endl;
    cout << "Tax: " << tax_percents << "%" << endl;
    cout << "========================" << endl;

    int small_rooms{};
    cout << "How many small rooms need to be cleaned? - ";
    cin >> small_rooms;

    int large_rooms{};
    cout << "\nHow many large rooms need to be cleaned? - ";
    cin >> large_rooms;

    cout << "\n========================" << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    cost = price_per_small_room * small_rooms + price_per_large_room * large_rooms;
    cout << "Cost: $" << cost << endl;

    tax = cost * tax_percents / 100;
    cout << "Tax: $" << tax << endl;

    cout << "========================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimates_valid_days << " days" << endl;

    return 0;
}