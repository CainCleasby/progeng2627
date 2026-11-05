#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v{1, 2, 3, 4, 5, 6};
    std::vector<double> vout;

    filter_v(v, 4, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
    std::cout << "end" << std::endl;
    v = {2, 4, 1, 6};
    filter_v(v, 3, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
    std::cout << "end" << std::endl;
    v = {2, 4, 1, 6};
    filter_v(v, 4, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
    std::cout << "end" << std::endl;
}