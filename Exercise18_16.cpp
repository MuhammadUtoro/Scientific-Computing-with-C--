/*
Taken from the book: Guide To Scientific Computing in C++
Write the code to store values (number of the cars passed in five consecutives days) and find the average
*/

#include <iostream>
#include <cmath>

int main(){

    int cars[5] = {34, 58, 57, 32, 43};
    double sum = 0.0; double average = 0.0;
    for (int i = 0; i<5; i++){
        sum += cars[i];
        average = sum/5;
    } 
    std::cout << "Total cars = " << sum << std::endl;
    std::cout << "Average is = " << average << std::endl;

}