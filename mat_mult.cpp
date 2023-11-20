/*
The matrix multiplication function
*/

#include <iostream>

#define R1 3 // Number of Row Matrix 1
#define C1 3 // Number of Column Matrix 1
#define R2 3 // Number of Row Matrix 2
#define C2 3 // Number of Column Matrix 2

void mat_mult(double mat_a[][C1],double mat_b[][C2]){

    double rslt[R1][C2];

    for (int i = 0; i<R1; i++){
        for (int j = 0; j<C2; j++){
            rslt[i][j] = 0;
            for (int k = 0; k<R2; k++){
                rslt[i][j] += mat_a[i][k] * mat_b[k][j];
            }
            std::cout << rslt[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main(){

    double A[3][3] = {{1.0,5.0,0.0}, // 3x3 Matrix
                    {7.0,1.0,2.0},
                    {0.0,0.0,1.0}};
    double B[3][3] = {{-2.0,0.0,1.0}, // 3x3 Matrix
                    {1.0,0.0,0.0},
                    {4.0,1.0,0.0}};

    mat_mult(A,B);

    std::cin.get();
    
    return 0; 

}