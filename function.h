#pragma once

#pragma region FillArray
void fillIntArray(int* arr, int size);
void fillDoubleArray(double* arr, int size);
void fillCharArray(char* arr, int size);
#pragma endregion

#pragma region PrintArray
void printIntArray(int* arr, int size);
void printDoubleArray(double* arr, int size);
void printCharArray(char* arr, int size);
#pragma endregion

#pragma region FindMinimal
void findIntMinimal(int* arr, int size);
void findDoubleMinimal(double* arr, int size);
void findCharMinimal(char* arr, int size);
#pragma endregion

#pragma region FindMaximus
void findIntMaximum(int* arr, int size);
void findDoubleMaximum(double* arr, int size);
void findCharMaximum(char* arr, int size);
#pragma endregion

#pragma region SortingArray
void sortIntArray(int* arr , int size);
void sortDoubleArray(double* arr, int size);
void sortCharArray(char* arr, int size);
#pragma endregion

#pragma region EditElementToArray
void editIntElementToArray(int* arr, int& size, int position, int element);
void editDoubleElementToArray(double* arr, int& size, int position, double element);
void editCharlementToArray(char* arr, int& size, int position, char element);
#pragma endregion

#ifdef INTEGER

#endif // INTEGER
