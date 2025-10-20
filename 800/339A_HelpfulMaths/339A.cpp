#include <iostream>
#include <algorithm>

int main () {

    std::string s;
    std::cin>>s;

    std::string t;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
           t += s[i]; //append to string
        }
    }

    std::sort(t.begin(),t.end());

    for(int i=0;i<t.size();i++){
        std::cout<<t[i];
        if (i<t.size()-1) { // dont print "+" last position
            std::cout<<"+";
        }
    }

    return 0;
}