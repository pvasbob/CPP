#include <iostream>

#include "utils/findtarget.hpp"
#include "utils/bubble_sort_array.hpp"
#include "utils/print2Dmatrix.hpp"
#include "utils/init_matrix2D.hpp"
#include "utils/print_matrix2D.hpp"

const int rows = 2;
const int cols = 3;

void printmatrix(int matrix[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix[i][i] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
//    int values[3] = {10, 20, 30};
//    cout << findtarget(values, 3, 9) << endl;

//    int values[] = {3, 1, 4, 1, 5, 4, 6, 10, 42, 0, 4, 54, 100, 87};
//    int* (*func_ptr)(int* numbers, size_t size) = &bubble_sort_array1;
//
//    int *ptr;
//    ptr = func_ptr(values, size(values));
//    bubble_sort_array(values, size(values));
//    for ( int i = 0; i < size(values); i++){
//        cout << ptr[i] << endl;
//    }

//    const int rows = 2;
//    const int columns = 3;
//
    int matrix[rows][cols] = {
            {11, 12, 13},
            {21, 22, 23}
    };
    printmatrix(matrix);
//
//    passFunction(matrix, rows);



//    int **array = init_matrix2D(rows, cols);
//    print_matrix2D(array, rows, cols);

//    int* array[rows];
//    for (int i = 0; i < rows; i++){
//        array[i] = new int[cols];
//    }
//
//
//    ProcessArray(array, cols);

}
