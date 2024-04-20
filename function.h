#pragma once



#pragma region ���������� �������
void fillArray_Int(int* arr, int size);
void fillArray_Double(double* arr, int size);
void fillArray_Char(char* arr, int size);
#pragma endregion

#pragma region ������ �������
void printArray_Int(int* arr, int size);
void printArray_Double(double* arr, int size);
void printArray_Char(char* arr, int size);
#pragma endregion

#pragma region ����� ������������
int findMinimal_Int(int* arr, int size);
double findMinimal_Double(double* arr, int size);
char findMinimal_Char(char* arr, int size);
#pragma endregion

#pragma region ����� �������������
int findMaximum_Int(int* arr, int size);
double findMaximum_Double(double* arr, int size);
char findMaximum_Char(char* arr, int size);
#pragma endregion

#pragma region ����������
void sortArray_Int(int* arr, int size);
void sortArray_Double(double* arr, int size);
void sortArray_Char(char* arr, int size);
#pragma endregion

#pragma region �������������� ��������
void editElementToArray_Int(int* arr, int& size, int position, int element);
void editElementToArray_Double(double* arr, int& size, int position, double element);
void editElementToArray_Char(char* arr, int& size, int position, char element);
#pragma endregion
