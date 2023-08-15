/*
Taken from the book: Guide to Scientific Computing in C++
Exercise 2.7 sub 2.1
*/

#include <iostream>

int main(){
    
    double x, y, z;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;

    if((x >= y) || (x<5.0)){
        z = 4.0;
    }else{
        z = 2.0;
    }

    std::cout << z << std::endl;
}
