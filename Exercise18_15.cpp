/*
Taken from the book: Guide To Scientific Computing in C++
Write code that invites user to input separately strings that store their given and family name.
Print the full name!
*/

#include <iostream>
#include <string>

int main(){

    std::string givenName;
    std::string familyName;
    // std::string fullName = givenName + familyName;

    std::cout << "Enter your given name: " << std::endl;
    std::cin >> givenName;
    std::cout << "Enter your family name: " << std::endl;
    std::cin >> familyName;
    std::cout << givenName << " " << familyName << std::endl;

    return 0;
}