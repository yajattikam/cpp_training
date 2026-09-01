#include <iostream>

int main(){

    std::cout << "Enter a number: ";    // Initial request for input

    int num{};                          // Variable for user input
    std::cin >> num;                    // Inserting user input to variable

    std::cout << " Three times the given number is: " << num * 3 << " \n"; // Output with the required solution

}