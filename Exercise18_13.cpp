/*
Taken from the book: Guide To Scientific Computing in C++
Write code that declares two vector as arrays of double precision floating point numbers of length 3 and assign values
to each entries. Find the dot product of these vectors and print. Print the Euclidean Norm of both vectors!
*/

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#define size 3

//function to calculate dot product of two vectors
double dot_product(double vector_a[], double vector_b[]){
    double product = 0.0;
    for(int i=0; i<size; i++){
        product = product + vector_a[i] * vector_b[i];
    }
        return product;
}

double euc_norm(double vector_a[]){
    double sum = 0.0;
    for(int i=0; i<size; i++){
        sum = sum+pow(vector_a[i],2);
    }
    return sqrt(sum);
}

int main (){

    double myArray_1[] = {1.5,1.6,1.7};
    double myArray_2[] = {1.2,1.3,1.4};
    std::cout << "Dot product = " << dot_product(myArray_1,myArray_2) << std::endl;
    std::cout << "Euclidean norm vector_1 = " << euc_norm(myArray_1) << std::endl;
    std::cout << "Euclidean norm vector_2 = " << euc_norm(myArray_2) << std::endl;
    
}