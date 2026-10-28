#include <iostream>
#include <cmath>

void IntDiv(int a, int b, int& num, int& rem){
    num = a/b;
    rem = a - num*b;
}

int main(){
    int a, b, num, rem;
    std::cout << "input a" << std::endl;
    std::cin >> a;
    std::cout << "input b" << std::endl;
    std::cin >> b;

    IntDiv(a, b, num, rem);
    std::cout << "interger division = " << num << std::endl;
    std::cout << "remainder = " << rem << std::endl << std::endl;

    IntDiv(7, 6, num, rem);
    std::cout << "interger division = " << num << std::endl;
    std::cout << "remainder = " << rem << std::endl;
    IntDiv(5, 8, num, rem);
    std::cout << "interger division = " << num << std::endl;
    std::cout << "remainder = " << rem << std::endl;
    IntDiv(36, 12, num, rem);
    std::cout << "interger division = " << num << std::endl;
    std::cout << "remainder = " << rem << std::endl;
    IntDiv(67, 10, num, rem);
    std::cout << "interger division = " << num << std::endl;
    std::cout << "remainder = " << rem << std::endl;
}