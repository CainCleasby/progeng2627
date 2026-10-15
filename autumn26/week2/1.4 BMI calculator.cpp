#include <iostream>

int main(){
    
    double n1, n2, n3;

    std::cout << "what is your weight in kg?" << std::endl;
    std::cin >> n1;
    std::cout << "what is your height in metres?" << std::endl;
    std::cin >> n2;

    n3 = n1/(n2*n2);
    std::cout << "your BMI is " << n3 << std::endl;
}