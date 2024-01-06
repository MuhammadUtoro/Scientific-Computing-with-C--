#include <iostream>
#include <string>

int main(){
    
    int vec_a[2][2] = {{0,2},
                       {1,0}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            std::cout << vec_a[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // std::cout << vec_a[0][0] << "\t";
    // std::cout << vec_a[0][1] << std::endl;
    // std::cout << vec_a[1][0] << "\t";
    // std::cout << vec_a[1][1] << std::endl;

    return 0; 

}