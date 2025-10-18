#include <iostream>
#include <set>

int main () {

    std::string s;
    std::cin>>s;

    std::set<char> d(s.begin(), s.end()); // creates a [std::set] containing all the unique characters from the string s

    std::cout << (d.size() % 2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

    return 0;
}