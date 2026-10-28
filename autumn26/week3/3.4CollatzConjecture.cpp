#include <iostream>

int main(){
    int n;

    std::cout << "enter a number" << std::endl;
    std::cin >> n;

    while(n != 1){
        if(n % 2 == 1){
            n = 3*n + 1;
            std::cout << n << std::endl;
        }
        else{
            n = n/2;
            std::cout << n << std::endl;
        }
    }
}