#include <iostream>

int main () {

    int matrix[5][5];
    int row, col;

    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            std::cin>>matrix[i][j];
            if (matrix[i][j] == 1){
                row = i + 1;
                col = j + 1;
            }
        }
    }

    std::cout<<std::abs(row - 3) + std::abs(col - 3)<<'\n'; // finding matrix[3][3]

    return 0;
}