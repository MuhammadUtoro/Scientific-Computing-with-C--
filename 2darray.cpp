/*
Creating 2d dynamic array using pointer
*/

#include <iostream>
#include <cmath>

int main(){

    int rows, cols;
    std::cout << "Enter the number of row: " << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of coloumn: " << std::endl;
    std::cin >> cols;

    float **table = new float *[rows]; // initiating the number of rows
    for(int i=0; i<rows; i++){
        table[i] = new float [cols]; // initiating the coloumns
    }

    // assigning values 
    for(int i=0; i<rows; i++){
        std::cout << "Enter values for row " << i+1 << " col 1" << std::endl;
        std::cin >> table[i][0];
    }
    for(int j=0; j<cols; j++){
        std::cout << "Enter values for row " << j+1 << " col 2" << std::endl;
        std::cin >> table[0][j];
    }

    // printing the array/matrix
    std::cout << table[0][1] << std::endl;

    //manually deallocate memory
    for(int i=0; i<rows; i++){
        delete[] table[i]; // deleting the coloumn
    }

    delete[] table; // deleting rows
    table = NULL; // set the value to NULL

    return 0;
}