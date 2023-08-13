/*
cmath is the header file or library for mathematical function and constant. To include, #include <cmath>
some formatting command in c++ are:

new line ----> \n
tab ---------> \t
' -----------> \'
" -----------> \"
? -----------> \?
bell sound --> \a 

*/

#include <iostream>
#include <cmath>

int main(){

    float x = 19.2;
    std::cout << x/4.02 << std::endl; // division
    std::cout << x*3.56 << std::endl; // multiplication
    std::cout << sqrt(x) << std::endl; // square root
    std::cout << pow(x,3) << std::endl; // x to the power of 3
    std:: cout << exp(x) << std::endl; // exponential function
    std::cout << M_PI << std::endl; // the value of Pi (3.14)
    std::cout << sin(M_PI/6) << std::endl; // sine function. For trig function, the input is in radian
    std::cout << asin(0.50) << std::endl; // inverse sine function. The result will be in radian
    std::cout << acos(0.50) << std::endl;  

    return 0;
}