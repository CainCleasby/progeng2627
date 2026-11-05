#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    double min;

    if(vin.size() == 0){
        return min;
    }
    else{
        min = vin[0];
        for(int i = 1; i < 4; i++){
            if(vin[i] < min){
                min = vin[i];
            }
            return min;
        }
    }

}



int main(){
    std::vector<double> v{2, 4, 6, 1};
    std::cout << min_vector_element << std::endl;
    v = {2, 5, 8, 10};
    std::cout << min_vector_element << std::endl;
    v = {};
    std::cout << min_vector_element << std::endl;
}