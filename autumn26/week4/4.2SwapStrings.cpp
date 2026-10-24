#include <iostream>
#include <string>

void MySwap(std::string& s1, std::string& s2){
    std::string Tstring = s1;
    s1 = s2;
    s2 = Tstring;
}

int main(){
    std::string s1, s2;
    std::cout << "enter s1" << std::endl;
    std::cin >> s1;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "enter s2" << std::endl;
    std::cin >> s2;
    std::cout << "s2 = " << s1 << std::endl;

    MySwap(s1, s2);
    std::cout << "s1 now = " << s1 << std::endl;
    std::cout << "s2 now = " << s2 << std::endl;
}