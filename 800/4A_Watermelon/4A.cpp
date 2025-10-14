#include <iostream>

int main() {

    int w;
    std::cin>>w;

    std::cout<< ((w % 2 == 0 && w > 2) ? "YES\n" : "NO\n");

    return 0;
}