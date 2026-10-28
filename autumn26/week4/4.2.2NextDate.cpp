#include <iostream>

bool leap_year(int year){
    bool ly;

    if(year % 4 ==0){
        if(year % 100 ==0){
            if(year % 400 ==0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    
    bool leap_year;
        bool ly;
    
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;

    if(d1 == 31){
        d2 = 1;
        m2 = m1 + 1;
    }
    if(d1 == 31 && m1 == 12){
        d2 = 1;
        m2 = 1;
        y2 = 1;
     }
    if(m1 == 4, 5, 9, 11 && d1 == 30){
         d2 = 1;
         m2 = m1 + 1;
    }
    if(m1 == 2 && ly && d1 == 29){
        d2 = 1;
        m2 = m1 + 1;
    }
    if(m1 == 2 && !ly && d1 == 28){
        d2 = 1;
        m2 = m1 + 1;
   }
}


int main(){
    int d2, m2, y2;

    next_date(31, 1, 2026, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    next_date(30, 4, 2026, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    next_date(28, 2, 2027, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    next_date(28, 2, 2028, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    next_date(24, 3, 2007, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
}