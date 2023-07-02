#include <iostream>

void print_matrix2D(int** a, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout << *(*(a + i)+ j) << " ";
        }
        std:: cout << std:: endl;
    }
}