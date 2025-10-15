#include <iostream>

int main() {

    int n;
    std::cin>>n;

    int s=0;
    while (n--){
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a+b+c>=2){s++;}
    }

    std::cout<<s;

    return 0;
}