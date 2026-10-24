#include <iostream>

int Lnum(int n1, int n2, int n3){
    int largest = n1;
    if(n2 > n1){
        largest = n2;
        if(n3 > n2){
            largest = n3;
        }
    }
    return largest;
}

int main(){
    int n1, n2, n3;
    std::cout << "enter 3 numbers" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    std::cout << "the largest number is: " << Lnum(n1, n2, n3) << std::endl;

    std::cout << (Lnum(1, 2, 3)) << std::endl;
    std::cout << (Lnum(6, 2, 3)) << std::endl;
    std::cout << (Lnum(1, 9, 3)) << std::endl;
    std::cout << (Lnum(1, 12, 3)) << std::endl;
    std::cout << (Lnum(1, 21, 3)) << std::endl;

}