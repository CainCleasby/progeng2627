#include <iostream> 
#include <cmath>

int smallest_factor(int n){

    for(int pf = 2; pf*pf <= n; pf++){
        if(n % pf == 0){
            return pf;
        }
        return n;
    }
}

int main(){
    int lb, ub;
    std::cout << "input a lower bound and an upper bound" << std::endl;
    std::cin >> lb >> ub;//taking upper and lower bounds

    if(lb == 2){
        std::cout << lb << " ";
        lb = 3;
    }
    if(lb == 3){
        std::cout << lb << " ";
        lb = 4;
    }
    
    for(int i = lb; i <= ub; i++){ 
        if(smallest_factor(i) == i && i >= 2){
            std::cout << i << " ";
        }
    }
}