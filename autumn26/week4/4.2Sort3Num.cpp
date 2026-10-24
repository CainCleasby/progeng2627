#include <iostream>

void myswap(double& n1, double& n2){

    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_three_numbers(double& n1, double& n2, double& n3){
    if(n1 > n2){
        myswap(n1, n2);
    }
    if(n1 > n3){
        myswap(n1, n3);
    }
    if(n2 > n3){
        myswap(n2, n3);
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

    n1 = 3;
    n2 = 18;
    n3 = 16;
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    n1 = 31;
    n2 = 12;
    n3 = 16;
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    n1 = 21;
    n2 = 12;
    n3 = 109;
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    
    
    
}