
int** init_matrix2D(int rows, int cols) {
    int** array = new int* [rows];
    for(int i = 0; i < rows; i++){
        array[i]=  new int[cols];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            *(*(array + i) + j) = i + j;
        }
    }

    return array;
}

