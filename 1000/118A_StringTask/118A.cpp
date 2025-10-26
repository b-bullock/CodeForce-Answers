#include <iostream>

bool vowel(char ch);

int main () {

    std::string s;
    std::cin>> s;

    for(int i=0;i<s.size();i++){
        s[i] = tolower(s[i]);
        if (!vowel(s[i])){
            std::cout<<"."<<s[i];
        }
    }

    return 0;
}

bool vowel(char ch){
    std::string v = "aeiouy";
    ch = tolower(ch);
    return v.find(ch) != std::string::npos;
}