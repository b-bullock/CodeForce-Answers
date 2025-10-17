#include <iostream>

int main () {

    std::string s1;
    std::string s2;

    std::cin>>s1;
    std::cin>>s2;

    for(int i=0;i<s1.size();i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if (s1 < s2) {
        std::cout<<-1;
    } else if (s1 > s2){
        std::cout<<1;
    } else {std::cout<<0;}

    return 0;
}