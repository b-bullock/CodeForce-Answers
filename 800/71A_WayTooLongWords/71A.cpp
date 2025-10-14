#include <iostream>

int main() {

    int n;
    std::cin>>n;
    std::string w;

    while (n--) {
        std::cin>>w;
        if (w.length()>10){
            std::cout<< w[0] << w.length() - 2 << w.back() << '\n';
        } else {std::cout<<w<<'\n';}
    }
    
    return 0;
}