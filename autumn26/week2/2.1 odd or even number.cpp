#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if(rem == 0){
        std::cout << "this number is a multiple of 3" << std::endl;  
    }
    else{
        std::cout << "this number is an odd number" << std::endl;
    }
}