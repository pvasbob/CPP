#include <cstddef>

#include "swap.hpp"

void bubble_sort_array(int* numbers, size_t size){
    for (int sort_times = 1; sort_times < size -1; sort_times++){
        for (int i = 0; i < size-sort_times; i++) {
            if (numbers[i] >= numbers[i + 1]) {
                swap(numbers, i, i+1);
            }
        }
    }

}


int* bubble_sort_array1(int* numbers, size_t size){
    for (int sort_times = 1; sort_times < size -1; sort_times++){
        for (int i = 0; i < size-sort_times; i++) {
            if (numbers[i] >= numbers[i + 1]) {
                swap(numbers, i, i+1);
            }
        }
    }
    return numbers;
}