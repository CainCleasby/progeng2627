#include<iostream>

int main(){
 
    double n, acc = 0, avg, num = 1;

    while(n != 0){
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;
    acc = acc + n;
    avg = acc/num;
    num = num + 1;
    std::cout << "the average so far is:" << std::endl;
    std::cout << avg << std::endl;
    }
}