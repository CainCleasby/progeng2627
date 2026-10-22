#include <iostream>
#include <string>

int main(){
    std::string word_in;

    std::cin >> word_in;

    while(word_in != "STOP"){
        std::cout << word_in << std::endl;
        std::cin >> word_in;
    }
}