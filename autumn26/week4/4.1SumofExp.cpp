#include <iostream>
#include <cmath>

int main(){

    double x, n, a;

    a = 0;
    
    std::cout << "input a value x" << std::endl;
    std::cin >> x;
    std::cout << "input a value n" << std::endl;
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        a = a + pow(x, i);
        std::cout << a << std::endl;
    }
}