/*
Creating array without pointer
*/

#include <iostream>
#include <cmath>

int main(){

    int n;
    std::cout << "Enter array length: ";
    std::cin >> n;
    float myArray1[n]; // creating 8x1 array
    for(int i=0; i<n; i++){
        std::cout << "Enter value: " << i+1 << std::endl;
        std::cin >> myArray1[i];
    }

    for(int i=0; i<n; i++){
        
        std::cout << "The values are: " << myArray1[i] << "\n";         
    }

}