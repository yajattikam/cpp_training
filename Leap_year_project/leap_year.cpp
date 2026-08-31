#include <iostream>
#include <limits>

// Pure logic function: returns true/false
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Helper to safely get an integer from terminal
int getValidYear() {
    int year{};
    while (true) {
        std::cout << "Enter a year (or 0 to exit): ";
        if (std::cin >> year) {
            if (year >= 0) {
                return year; // Valid input
            }
            std::cout << "Year cannot be negative.\n";
        } else {
            // Fix invalid input (e.g. string/letters)
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number.\n\n";
        }
    }
}

int main() {
    while (true) {
        int year = getValidYear();
        
        if (year == 0) {
            std::cout << "Exiting program.\n";
            break; // Clean exit condition
        }

        if (isLeapYear(year)) {
            std::cout << "Year " << year << " is a leap year.\n\n";
        } else {
            std::cout << "Year " << year << " is NOT a leap year.\n\n";
        }
    }
    return 0;
}