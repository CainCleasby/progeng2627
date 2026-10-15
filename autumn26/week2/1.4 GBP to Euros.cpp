#include <iostream>

int main(){
    double n1, n2;

    std::cout << "how many Pounds do you have?" << std::endl;
    std::cin >> n1;

    n2 = 0.85 * n1;

    std::cout << "you have " << n2 << " euros" << std::endl;
}