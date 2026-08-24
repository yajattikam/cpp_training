//Check whether a year is leap or not.
#include <iostream>

void checkLeapYear(){ //Function to check whether a year is leap or not.
    
    //Input year from user.
    int year{};
    std::cout << "Input year:\n";
    std::cin >> year;
    
     /*Main logic to check whether the year is leap or not.
      *Here I stated 2 conditions for the calculation:
      * 1. Check if the number is divisible by 4 and not divisible by 100.
      * 2. Check if the number is divisible by 100 and divisible by 400.*/
    if ( (year%4 == 0 && year%100 != 0) || ( year%100 == 0 && year%400 == 0)){
      std::cout << "Year " << year << " is a leap year.\n";
    }
    else {
      std::cout << "Year " << year << " does not fall on a leap year.\n";
    }
  }

int main() {
  //Loop to keep running until user decides to exit.
  while (true) {
    checkLeapYear();
  }
}

