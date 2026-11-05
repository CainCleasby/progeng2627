#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int num;
    std::cout << "how many elements do you want to enter?" << std::endl;
    std::cin >> num;

    for(int i2 = 1; i2 <= num; i2++){
        
        double n;
        std::cout << "enter element " << i2 << std::endl;
        std::cin >> n;
        v.push_back(n);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}