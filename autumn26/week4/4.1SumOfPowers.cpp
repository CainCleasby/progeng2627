#include <iostream>

int SumofPow(double x, int n){
    double SOP = x;
    double y = x;
    if(n >= 1){
        for(int i = 1; i < n; i++){
            y = y * x;
            SOP = y + SOP;
        }
    }
    return SOP;
}

int main(){
    double x;
    int n;
    std::cout << "enter an x and n value" << std::endl;
    std::cin >> x >> n;
    std::cout << "The sum of Powers is " << SumofPow(x, n) << std::endl;

    //test
    std::cout << "The sum of Powers is " << SumofPow(2, 2) << std::endl;
    std::cout << "The sum of Powers is " << SumofPow(2, 3) << std::endl;
    std::cout << "The sum of Powers is " << SumofPow(2, 4) << std::endl;
    std::cout << "The sum of Powers is " << SumofPow(2, 5) << std::endl;
}