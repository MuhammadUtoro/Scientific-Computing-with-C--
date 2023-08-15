/*
Taken from the book: Guide to Scientific Computing in C++
Exercise 2.7 sub 2.2
*/

#include <iostream>

int main(){

    double p,q,x,y;
    int j;

    std::cout << "Enter p: ";
    std::cin >> p;
    std::cout << "Enter q: ";
    std::cin >> q;
    std::cout << "Enter j: ";
    std::cin >> j;

    if(p > q){
        x = 0.0;
    }else if ((p <= q) && (j == 10))
    {
        x = 1.0;
    }else{
        x = 2.0;
    }
    
    std::cout << x << std::endl;

    return 0;

}