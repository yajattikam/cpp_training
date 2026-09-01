#include <iostream>

int main(){

    std::cout << "Enter a number: ";    // Initial request for input

    int num{};                          // Variable for user input
    std::cin >> num;                    // Inserting user input to variable

    std::cout << "Double: " << num * 2 << " \n"; // Output with double the number
    std::cout << "Triple: " << num * 3 << " \n"; // Output with triple the number

}