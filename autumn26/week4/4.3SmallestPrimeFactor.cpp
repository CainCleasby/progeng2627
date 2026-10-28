#include <iostream> 
#include <cmath>

int smallest_factor(int n){

    for(int pf = 2; pf*pf <= n; pf++){
        if(n % pf == 0){
            return pf;
        }
        n = 0;
        return n;
    }
}

int main(){
    std::cout << "The smallest prime factor is " << smallest_factor(7) << std::endl;
    std::cout << "The smallest prime factor is " << smallest_factor(56) << std::endl;
    std::cout << "The smallest prime factor is " << smallest_factor(90) << std::endl;
    std::cout << "The smallest prime factor is " << smallest_factor(51) << std::endl;
}

