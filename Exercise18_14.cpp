/*
Taken from the book: Guide To Scientific Computing in C++
Write the code to declare 4 2x2 matrices of double precision floating point numbers A,B,C,D and assign values to the entries
of A and B. Let C = A+B and D = A*B. Extend the code so that it calculates the entries of C and D and print!
*/

#include <iostream>
#include <cmath>

int main(){

    double vec_A[2][2] = {{1.1,3.3},{2.2,4.4}};
    double vec_B[2][2] = {{1.2,3.4},{2.3,4.5}};
    double vec_C[2][2];
    double vec_D[2][2];

    for (int i = 0; i<2; i++){
        for(int j = 1; j<2; j++){
            vec_C[j-1][i] = vec_A[j-1][i] + vec_B[j-1][i];
            vec_C[j][i] = vec_A[j][i] + vec_B[j][i];
            vec_D[j-1][i] = vec_A[j-1][i] * vec_B[j-1][i];
            vec_D[j][i] = vec_A[j][i] * vec_B[j][i];
        }
    }

    for (int i = 0; i<2; i++){
        for(int j = 1; j<2; j++){
            std::cout << vec_C[j-1][i] << std::endl;
            std::cout << vec_C[j][i] << std::endl;
            std::cout << vec_D[j-1][i] << std::endl;
            std::cout << vec_D[j][i] << std::endl;
        }    
    }

    return 0;
}