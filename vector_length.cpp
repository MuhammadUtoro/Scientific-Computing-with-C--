#include <iostream>
#include <string>
#include <cmath>

double vec_leng(double x, double y, double z);

int main(){

    double x, y, z, l;

    x = 2.0;
    y = 5.5;
    z = 7.75;

    l = vec_leng(x,y,z);
    std::cout << "vector length = " << l << std::endl;

    std::cin.get();
    return 0;
}

double vec_leng(double x, double y, double z){
    double l;
    l = sqrt(pow(x,2) + pow(y,2) +pow(z,2));
    return l;
}