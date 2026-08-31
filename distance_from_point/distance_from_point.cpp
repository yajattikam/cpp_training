#include <iostream>
#include <cmath>
#include <utility>

// Function to calculate the distance between the given point and origin in 2D space
void distance2D( double x , double y){
    double distance{};
    distance = std::sqrt( std::pow(x, 2) + std::pow(y, 2) );
    std::cout << "Distance between the given point and origin is: " << distance <<" units! \n";
}

// Function to get the coordinates
std::pair <double,double> getCordinates(){
    double x;
    double y;
    std::cout << "Enter 'x' coordinate: ";
    std::cin >> x;
    std::cout << "Enter 'y' coordinate: ";
    std::cin >> y;
    return {x, y};
}

int main(){

    while(true){
        auto [x, y] = getCordinates();
        distance2D( x, y);
    }
}