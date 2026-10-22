#include <iostream>

int main(){
    int n, x;

    std::cout << "enter a number" << std::endl;
    std::cin >> n;
    for(int n2 = 1; n2 <= n; n2++){
        
        for(int n1 = 1; n1 <= n; n1++){
            x=n2;
            std::cout << x*n1 << "\t";
        }

        std::cout << std::endl;
    }
}