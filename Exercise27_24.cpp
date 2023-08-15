/*
Taken from the book: Guide to Scientific Computing in C++
Exercise 2.7 sub 2.1 - Control Flow Part IV
This exercise aims to use loop for calculating matrices
w = u - 3*v     z = A*u - v
x = u - v       C = 4*A - 3*B   
y = A*u         D = A*B
*/

#include <iostream>

int main(){

    double u[3] = {1.0,2.0,3.0}; // 1x3 Matrix
    double v[3] = {6.0,5.0,4.0}; // 1x3 Matrix
    double A[3][3] = {{1.0,5.0,0.0}, // 3x3 Matrix
                    {7.0,1.0,2.0},
                    {0.0,0.0,1.0}};
    double B[3][3] = {{-2.0,0.0,1.0}, // 3x3 Matrix
                    {1.0,0.0,0.0},
                    {4.0,1.0,0.0}};

    double w[3];
    for (int i = 0; i<3; i++){
        w[i] = u[i] - 3.0*v[i];
    }

    for (int i = 0; i<3; i++){
        std::cout << w[i] << std::endl;
    }

    double x[3];
    for (int i = 0; i<3; i++){
        x[i] = u[i] - v[i];
    }
    
    double y[3];
    for (int i = 0; i<3; i++){
        for (int j = 1; j<=3; j++){
            y[j-1] += A[i][j-1] * u[i];
        }
    }

    for (int i = 0; i<3; i++){
        std::cout << y[i] << std::endl;
    }

    double z[3];
    for (int i = 0; i<3; i++){
        for (int j = 1; j<=3; j++){
            z[j-1] += A[i][j-1] * u[i];
        }
        z[i] = z[i] - v[i];
    }
    for (int i = 0; i<3; i++){
        std::cout << z[i] << std::endl;
    }

    double C[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 1; j<=3; j++){
            C[i][j-1] = 4*A[i][j-1] - 3*B[i][j-1];
        }
    }
    for (int i = 0; i<3; i++){
        for (int j = 1; j<=3; j++){
            std::cout << C[i][j-1] << std::endl;    
        }
    }

    return 0;
}