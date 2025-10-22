#include <iostream>

int main() {

    int a,b,c=0;
    std::cin>>a>>b;

    while (a<=b){
        a = a*3;
        b = b*2;
        c++;
    }

    std::cout<<c;

    return 0;
}