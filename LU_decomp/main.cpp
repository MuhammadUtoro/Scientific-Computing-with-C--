/*
Using Simbody to decompose 4x4 Matrix with LU decomposition - Soure: https://www.youtube.com/watch?v=BFYFkn-eOQk 
*/

#include <Simbody.h>
#include <iostream>

int main(){

    // Defining Matrix A (4x4)
    SimTK::Matrix A(4, 4);
    A(0,0) = 2; A(0,1) = 4; A(0,2) = 3; A(0,3) = 5;
    A(1,0) = -4; A(1,1) = -7; A(1,2) = -5; A(1,3) = -8;
    A(2,0) = 6; A(2,1) = 8; A(2,2) = 2; A(2,3) = 9;
    A(3,0) = 4; A(3,1) = 9; A(3,2) = -2; A(3,3) = 14;
    std::cout << A << std::endl;
    //Create Matrix L and U to store values
    SimTK::Matrix L, U;

    // Using the Linear ALgebra class function - Factor QTZ to decompose the matrix
    SimTK::FactorLU lu_decomp(A);
    lu_decomp.getL(L);
    lu_decomp.getU(U);
    std::cout << "Lower triangular matrix (L): " << L << std::endl;
    std::cout << "Upper triangular matrix (U): " << U << std::endl;
    

    std::cin.get();
    return 0;
}

