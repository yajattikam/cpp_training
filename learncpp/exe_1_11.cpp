#include <iostream>

void two_times( int num ) {

    std::cout << "Double: " << num * 2 << " \n"; // Output with double the number
}

void three_times( int num ){

    std::cout << "Triple: " << num * 3 << " \n"; // Output with triple the number

}

int main(){
    while(true){
        std::cout << "Enter a number: ";    // Initial request for input

        int num{};                          // Variable for user input
        std::cin >> num;                    // Inserting user input to variable

        two_times(num);
        three_times(num);
    }
}