#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout.clear();
    for(int i1 = 0; i1 < vin1.size(); i1++){
        vout.push_back(vin1[i1]);
    }
    for(int i2 = 0; i2 < vin2.size(); i2++){
        vout.push_back(vin2[i2]);
    }
}

int main(){
    std::vector<int> vout;
    std::vector<int> v1{1, 2, 3, 4};
    std::vector<int> v2{2, 4, 3};

    append_vectors(v1, v2, vout);
    for(int i3 = 0; i3 < vout.size(); i3++){
        std::cout << vout[i3] << std::endl;
    }
    std::cout << "end" << std::endl;
    v1 = {2, 2, 3, 3};
    v2 = {4, 4, 5, 5};
    append_vectors(v1, v2, vout);
    for(int i3 = 0; i3 < vout.size(); i3++){
        std::cout << vout[i3] << std::endl;
    }
    std::cout << "end" << std::endl;
}