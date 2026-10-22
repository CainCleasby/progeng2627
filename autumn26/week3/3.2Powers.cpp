#include <iostream>

int main(){
    double x, n, a;
    std::cout << "write a number x, followed by its power n" << std::endl;
    std::cin >> x >> n;
    a = x;
    
    for(int i = 2; i <= n; i++){
        a = a * x;
        std::cout << a << std::endl;
    }
}