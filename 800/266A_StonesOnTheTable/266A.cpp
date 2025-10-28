#include <iostream>

int main() {

    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;

    int c=0;
    for(int i=0;i<n;i++){
        char temp;
        temp = s[i+1];
        if (s[i]==temp){
            c++;
        }
    }
    std::cout<<c;

    return 0;
}