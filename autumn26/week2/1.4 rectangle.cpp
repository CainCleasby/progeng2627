#include <iostream>

int main(){
    double n1, n2, perimeter, area;

    std::cout << "what is the length of the rectangle?" << std::endl;
    std::cin >> n1;
    std::cout << "what is the width of the rectangle?" << std::endl;
    std::cin >> n2;
    
    perimeter = 2*(n1 + n2);
    area = n1*n2;

    std::cout << "perimeter = " << perimeter << ", area = " << area << std::endl;
}