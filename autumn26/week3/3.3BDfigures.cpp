#include <iostream>

int main(){
    int w, l, n1, n2;

    n1 = 0;
    n2 = 0;
    std::cout << "input a length and a width" << std::endl;
    std::cin >> l >> w;

    while(n2 < w){
        
        while(n1 < l){
            std::cout << "*";
            n1++;
        } 
    
        std::cout << std::endl;
        n2++;
        n1=0;
    }
}