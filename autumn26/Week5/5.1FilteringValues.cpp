#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int n = 1;
    
    std::cout << "please enter a sequence of numbers terminated by 0" << std::endl;
    while(n != 0){
        std::cin >> n;
        sequence.push_back(n);
    }

    int t;
    std::cout << "enter a number t" << std::endl;
    std::cin >> t;
    for(int i = 0; i < sequence.size(); i++){
        if(sequence[i] < t){
            std::cout << sequence[i] << std::endl;
        }
    }
}