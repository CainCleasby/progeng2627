#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void Translate(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string>& vout){
    int s = 0;
    for(int n = 0; n < v1.size(); n++){
        for(int i = 0; i < v2.size(); i+=2){
            if(v2[i] == v1[n]){
                vout.push_back(v2[i+1]);
                s = 1;
            }
        }
        if(s == 0){
            vout.push_back(v1[n]);
        }
        s = 0;
    }   
}


int main(){
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> vout;

    std::ifstream advert;
    advert.open ("advert.txt");
    if(!advert.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string Text;
    while(advert >> Text){
        v1.push_back(Text);
    }
    advert.close();

    std::ifstream meaning;
    meaning.open ("meaning.txt");
    if(!meaning.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string Word;
    while(meaning >> Word){
        v2.push_back(Word);
    }
    meaning.close();

    std::ofstream Output;
    Output.open("Translation.txt");
    if(!Output.is_open()){
        std::cout << "error opening a file" << std::endl;
        return EXIT_FAILURE; 
    }

    for(int i = 0; i < v1.size(); i++){
        Translate(v1, v2, vout);
        Output << vout[i] << " ";
    }
    Output.close();
}