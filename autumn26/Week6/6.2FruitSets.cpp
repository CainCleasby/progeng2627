#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        search_vector(vin2[i], vout);
        if(search_vector(vin2[i], vout) == -1){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        } 
    }
}

int main(){
    std::vector<std::string> vin1;
    std::vector<std::string> vin2;
    std::vector<std::string> vout;

    std::string inputfilename1; //first file
    std::cout << "enter name of first input file" << std::endl;

    std::cin >> inputfilename1;

    std::ifstream infile1; 
    infile1.open(inputfilename1);
    if(!infile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string tmp1;
    
    while(infile1 >> tmp1){
        vin1.push_back(tmp1);
    }
    infile1.close();



    std::string inputfilename2;//second file
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename2;

    std::ifstream infile2; 
    infile2.open(inputfilename2);
    if(!infile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    while(infile2 >> tmp2){
        vin2.push_back(tmp2);
    }
    infile2.close();

    std::ofstream outfile1;
    outfile1.open("union.txt");
    if(!outfile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    union_vector(vin1, vin2, vout);
    for(int i = 0; i < vout.size(); i++){
        outfile1 << vout[i] << std::endl;
    }
    outfile1.close();

    std::ofstream outfile2;
    outfile2.open("intersection.txt");
    if(!outfile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    intersection_vector(vin1, vin2, vout);
    for(int i = 0; i < vout.size(); i++){
        outfile2 << vout[i] << std::endl;
    }
    outfile2.close();
}

