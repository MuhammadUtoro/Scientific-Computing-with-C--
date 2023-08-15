/*
Taken from the book: Guide to Scientific Computing in C++
Exercise 2.7 sub 2.3 - Control Flow Part III
*/

#include <iostream>

int main(){

    int number;
    int sum = 0;

    while(sum <= 100){
        std::cout << "Enter any integer value: ";
        std::cin >> number;
        sum += number;
        std::cout << sum << std::endl;
        if(number == -2){
            std::cout << "Count will be reset!" << std::endl;
            sum = 0;
        }
        if(sum >= 100){
            std::cout << "The total sum of the integers = " << sum << std::endl;
            std::cout << "Program is terminated!" << std::endl; 
        }
    }

    return 0;

}