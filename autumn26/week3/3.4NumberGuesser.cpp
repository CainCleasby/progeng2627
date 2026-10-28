#include <iostream>

int guess_number(int N, int guess, int &lb, int &ub){
    if(N == 1){
        ub = guess - 1;
    }else if(N == 2){
        lb = guess + 1;
    }
    return guess = (ub-lb)/2 + lb;
}

int main(){
    int lb, ub, N, guess;
    std::cout << "enter a lower bound and an upper bound" << std::endl;
    std::cin >> lb >> ub;

    std::cout << "if your number is lower type 1" << std::endl;
    std::cout << "if your number is higher type 2" << std::endl;
    std::cout << "if your number has been guessed type 3" << std::endl;

    guess = (ub-lb)/2 + lb;
    std::cout << "is your number " << guess << "?" << std::endl;
    std::cin >> N;

    while(N != 3){
        guess = guess_number(N, guess, lb, ub);
        std::cout << "[debug] lb=" << lb << " ub=" << ub << " guess=" << guess << std::endl;
        if(ub >= lb){
            std::cout << "is your number " << guess << "?" << std::endl;
            std::cin >> N;
        }
        else{
            std::cout << "you've mad a mistake" << std::endl;
            return 1;
        }

    }
    std::cout << "your number is " << guess << std::endl;
}

