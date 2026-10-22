#include<iostream>

int main(){
 
    double a, b, c, quo = 0;

    std::cout << "enter two numbers" << std::endl;
    std::cin >> a >> b;

    while( a >= b ){
        c = a - b;
        std::cout << a << " is greater than " << b << " so we subtract " << b << " from " << a << " we get " << c << std::endl;
        a = a - b;
        quo = quo + 1;            
    }
    std::cout << "the quotient is " << quo << std::endl;
    std::cout << "the remainder is " << a << std::endl;  
}