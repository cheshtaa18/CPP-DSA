#include <iostream>

bool is_leap_year(const int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int main() {
    int year = 0;

    std::cout << "Enter year: ";
    if (!(std::cin >> year)) {
        std::cout << "Invalid input. Please enter an integer year." << std::endl;
        return 1;
    }

    std::cout << year << (is_leap_year(year) ? " is a leap year." : " is not a leap year.")
              << std::endl;

    return 0;
}
