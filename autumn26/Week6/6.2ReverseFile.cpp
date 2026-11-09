#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

void Reverse_v(const std::vector<int>& vin, std::vector<int>& vout){
    for(int i = 0; i < vin.size(); i++){
        vout.push_back(vin[vin.size()-i-1]);
    }
}

int main(){
    std::string inputfilename;
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    std::vector<int> v;
    std::vector<int> vout;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close();

    std::string outputfilename;
    std::cout << "enter the name of the output file" << std::endl;

    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    Reverse_v(v, vout);
    for(int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
    }
    
    outfile.close();    
}