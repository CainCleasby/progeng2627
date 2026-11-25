#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "this program accepts exactly one argument" << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string word;
    while(infile >> word){
        std::cout << word << std::endl;
    }

    infile.close();
}