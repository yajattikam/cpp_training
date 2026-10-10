#include <iostream>
#include <cmath>
#include <vector>

int userInput(){

    std::cout << "Enter the number upto which prime numbers are to be printed: ";
    int input{} ;
    std::cin >> input;
    return input;
}

std::vector<bool> sleive(int input){

    std::vector<bool> primes(input + 1, true);
    int limit = std::sqrt(input);

    primes[0] = false;
    primes[1] = false;

    for (int p = 2; p <= limit; p++) {
        // If primes[p] is not changed, then it is a prime
        if (primes[p] == true) {
            // Update all multiples of p greater than or equal to the square of it
            for (int i = p * p; i <= input; i += p) {
                primes[i] = false;
                }
    
        }
    }
    return primes;
}

void printNumbers( std::vector<bool> primes){

    for(int i = 0; i < primes.size(); i++){
        if(primes[i]){
             std::cout << i << "\n";
        }
       
    }

}

int main(){
    while (true)
    {
        printNumbers(sleive(userInput()));
    }
}

