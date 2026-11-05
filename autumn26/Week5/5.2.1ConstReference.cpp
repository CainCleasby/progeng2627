#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    double min;

    if(vin.size() == 0){
        return -1;
    }

    min = vin[0];
    for(int i = 1; i < vin.size(); i++){
        if(vin[i] < min){
            min = vin[i];
        }
    }
    return min;
}



int main(){
    std::vector<double> v{2, 4, 6, 1};
    std::cout << min_vector_element(v) << std::endl;
    v = {2, 5, 8, 10};
    std::cout << min_vector_element(v) << std::endl;
    v = {};
    std::cout << min_vector_element(v) << std::endl;
}