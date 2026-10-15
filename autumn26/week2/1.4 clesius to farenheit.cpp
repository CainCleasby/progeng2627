#include <iostream>

int main(){
    double n1, n2;

    std::cout << "what is the temperature in celsius?" << std::endl;
    std::cin >> n1;

    n2 = 9/5.0*n1 + 32;

    std::cout << "that is " << n2 << " farenheit" << std::endl;
}