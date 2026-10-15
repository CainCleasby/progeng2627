#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;

    std::cout << "input a temperature" << std::endl;
    std::cin >> temp_in >> unit_in;

    if(unit_in == "C"){
        unit_out = "F";
        temp_out = temp_in * 9/5.0 + 32; 
    }
    else{
        unit_out = "C";
        temp_out = (temp_in - 32) * 5/9.0;
    }
    
    std::cout << temp_out << unit_out << std::endl;

}