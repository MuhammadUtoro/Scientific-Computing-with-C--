/*
This is an extra exercise for exercise 2.4 in chapter 2.7
Multiplication 3x3 matrix
*/

#include <iostream>

int main(){

    double A[3][3] = {{1.0,5.0,0.0}, // 3x3 Matrix
                    {7.0,1.0,2.0},
                    {0.0,0.0,1.0}};
    double B[3][3] = {{-2.0,0.0,1.0}, // 3x3 Matrix
                    {1.0,0.0,0.0},
                    {4.0,1.0,0.0}};
    
    double M[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            int sum = 0;
            for (int k = 0; k<3; k++){
                sum += A[i][k] * B[k][j];
            }
            M[i][j] = sum;
        }
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            std::cout << " " << M[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
