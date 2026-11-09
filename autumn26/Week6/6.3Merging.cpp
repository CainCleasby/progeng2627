#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int n = 0;
    for(int i = 0; i < v2.size(); i++){
        while(n < v1.size() && v1[n] < v2[i]){
            merged.push_back(v1[n]);
            n = n + 1;
        }
        merged.push_back(v2[i]);
    }
}



int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {1, 3, 5, 6, 7};
    v2 = {2, 4, 6, 8, 9, 10};
    expected_output = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10, 11, 12};
    expected_output = {1, 3, 4, 5, 6, 6, 10, 11, 12};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}