//
// Created by qqb on 6/30/23.
//
#include <iostream>


void passFunction(int (*a)[3], int rows){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < 3; col++){
            std::cout << a[row][col] << std::endl;
        }
    }
}