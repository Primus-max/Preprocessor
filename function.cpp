#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "function.h"

#pragma region FillArray
void fillIntArray(int* arr, int size) {
    srand(time(NULL)); 

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
    }
}

void fillDoubleArray(double* arr, int size) {
    srand(time(NULL)); 

    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 10000) / 100.0; 
    }
}

void fillCharArray(char* arr, int size) {
    srand(time(NULL)); 

    for (int i = 0; i < size; ++i) {
        arr[i] = 'a' + rand() % 26; 
    }
}
#pragma endregion