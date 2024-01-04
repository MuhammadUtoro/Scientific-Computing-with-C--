// Using Simbody library to solve linear algebra problem (A.x = b)

#include <Simbody.h>
#include <iostream>


int main() {
    // Defining Matrix A
    SimTK::Matrix A(3, 3);
    A(0,0) = -3.0; A(0,1) = 2.0; A(0,2) = -1.0;
    A(1,0) = 6.0; A(1,1) = -6; A(1,2) = 7.0;
    A(2,0) = 3.0; A(2,1) = -4.0; A(2,2) = 4.0;

    // Defining vector b
    SimTK::Vector b(3); // Create a vector with size 2
    b[0] = -1.0;
    b[1] = -7.0;
    b[2] = -6.0;

    // Solve the linear system, A.x = b
    SimTK::Vector x;
    SimTK::FactorQTZ(A).solve(b, x);

    // Print the result
    std::cout << "Solution x: " << x << std::endl;

    std::cin.get();

    return 0;
}
