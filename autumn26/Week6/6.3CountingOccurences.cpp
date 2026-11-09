#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int Search_Vector(std::string s, const std::vector<std::string>& vin){
    int n = 0;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            n = n + 1;
        }
    }
    return n;
}


int main(){
    int n;
    std::vector<std::string> vin1;
    std::vector<std::string> vin2;
    std::vector<std::string> vout;

    std::ifstream Textfile;
    Textfile.open ("Text.txt");
    if(!Textfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string Text;
    while(Textfile >> Text){
        vin1.push_back(Text);
    }
    Textfile.close();

    std::ifstream Wordfile;
    Wordfile.open ("Word.txt");
    if(!Wordfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string Word;
    while(Wordfile >> Word){
        vin2.push_back(Word);
    }
    Wordfile.close();

    std::ofstream Output;
    Output.open ("occurences.txt");
    if(!Output.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < vin2.size(); i++){
        int n = Search_Vector(vin2[i], vin1);
        Output << vin2[i] << ": " << n << std::endl;
    }
    Output.close();
}