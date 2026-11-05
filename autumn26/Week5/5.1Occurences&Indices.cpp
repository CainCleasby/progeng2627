#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> Sequence;
    std::cout << "enter how many numbers you want to enter" << std::endl;
    std::cin >> n;

    for(int i1 = 0; i1 < n; i1++){
        int num;
        std::cout << "enter a number" << std::endl;
        std::cin >> num;
        Sequence.push_back(num);
    }

    int s;
    int count = 0;
    std::vector<int> Index;
    std::cout << "enter a number to see its occurences" << std::endl;
    std::cin >> s;
    
    for(int i2 = 0; i2 < n; i2++){
        if(Sequence[i2] == s){
            count = count + 1;
            Index.push_back(i2); 
        }
    }
    std::cout << "there are " << count << " occurences of " << s << " at:" << std::endl;
    for(int i3 = 0; i3 < count; i3++){
        std::cout << Index[i3] << std::endl;
    }

    if(count == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    
}