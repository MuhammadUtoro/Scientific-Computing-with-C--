#include <cmath>
#include <iostream>
#include <cassert>

int main(){

    float number;
    std::cout << "Enter non-negative number: " << std::endl;
    std::cin >> number;
    assert(std::isfinite(number)); // resulting in NaN
    //assert(number >= 0.0); // resulting in Error message
    std::cout << "The square root of " << number;
    std::cout << " is: " << sqrt(number) << std::endl;

    return 0;
}