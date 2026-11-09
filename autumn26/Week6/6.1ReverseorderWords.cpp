#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void Reverse_v(const std::vector<std::string>& vin1, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[vin1.size()-1-i]);
    }
}

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close();
    
    std::vector<std::string> vout;
    Reverse_v(v, vout);
    for(int i = 0; i < v.size(); i++){
        std::cout << vout[i] << std::endl; 
    }
    // TODO: print the content of v in reversed order

}