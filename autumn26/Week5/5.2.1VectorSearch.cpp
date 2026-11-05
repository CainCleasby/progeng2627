#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1; 
}

int main(){

    std::vector<int> v{2, 4, 6, 1};
    std::cout << search_vector(6, v) << std::endl;
    v = {2, 5, 8, 10};
    std::cout << search_vector(5, v) << std::endl;
    v = {3, 4, 5};
    std::cout << search_vector(2, v) << std::endl;
}