//Check whether a year is leap or not.
#include <iostream>
#include <limits>
void checkLeapYear(){ //Function to check whether a year is leap or not.
    
    //Input year from user.
    int year{};
    std::cout << "Input year:\n";
    std::cin >> year;
    std::cin.clear(); //Clear the input buffer.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore the input buffer.
    if (year <= 0) { //Check if the year is negative, string or zero.
      std::cout << "Year cannot be negative, string or zero. Please enter a valid year.\n";
    }
    else if (year > 0){ //Check if the year is positive.
      if ( (year%4 == 0 && year%100 != 0) || ( year%100 == 0 && year%400 == 0)){
        std::cout << "Year " << year << " is a leap year.\n";
      }/*Main logic to check whether the year is leap or not.
      *Here I stated 2 conditions for the calculation:
      * 1. Check if the number is divisible by 4 and not divisible by 100.
      * 2. Check if the number is divisible by 100 and divisible by 400.*/
      else {
        std::cout << "Year " << year << " does not fall on a leap year.\n";
      }
    }
  }
     
    

int main() {
  //Loop to keep running until user decides to exit.
  while (true) {
    checkLeapYear();
  }
}

