#include <iostream>
#include <cmath>

void Rec(double l, double w, double& prm, double& area){
    if(l, w > 0){
        prm = 2*(l + w);
        area = l*w;
    }
}

int main(){
    double l, w, prm, area;
    std::cout << "input the rectangles lenth" << std::endl;
    std::cin >> l;
    std::cout << "input the rectangles width" << std::endl;
    std::cin >> w;

    Rec(l, w, prm, area);
    std::cout << "the perimeter is " << prm << std::endl;
    std::cout << "the area is " << area << std::endl << std::endl;

    Rec(12, 6, prm, area);
    std::cout << "the perimeter is " << prm << std::endl;
    std::cout << "the area is " << area << std::endl;
    Rec(4, 5, prm, area);
    std::cout << "the perimeter is " << prm << std::endl;
    std::cout << "the area is " << area << std::endl;
    Rec(8, 2, prm, area);
    std::cout << "the perimeter is " << prm << std::endl;
    std::cout << "the area is " << area << std::endl;
    Rec(1, 1, prm, area);
    std::cout << "the perimeter is " << prm << std::endl;
    std::cout << "the area is " << area << std::endl;
}