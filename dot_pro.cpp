/*
Calculating dot product using the STL::vector. The method is called inner_product() and the arguments are the begin 
and end of the sequence, the initial value of the sequence (same argument as begin), and the initial summation value,
normally it's 0.
To call this method we have to inlude numeric header
However, this only works for int data type?
*/

#include <iostream>
#include <numeric>
#include <vector>

int main(){
    
    std::vector<int> myVec_1 {1,3,5,7};
    std::vector<int> myVec_2 {2,4,6,8};
    std::cout << "Dot product = " << inner_product(myVec_1.begin(), myVec_1.end(), myVec_2.begin(), 0);

}
