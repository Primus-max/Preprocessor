#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "function.h"

using namespace std;

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

#pragma region PrintArray
void printIntArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printDoubleArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printCharArray(char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#pragma endregion