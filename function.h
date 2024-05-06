#pragma once

//#define FILL_ARRAY fillArray_Int
//#define PRINT_ARRAY printArray_Int
//
//#ifdef INTEGER

//#elif defined(DOUBLE)
//#define FILL_ARRAY fillArray_Double
//#define PRINT_ARRAY printArray_Double

//#elif defined(CHAR)
//#define FILL_ARRAY fillArray_Char
//#define PRINT_ARRAY printArray_Char

//#endif

#define FILL_ARRAY(arr, size, type) \
    fillArray_##type(arr, size);

#define PRINT_ARRAY(arr, size, type) \
    printArray_##type(arr, size);

#define FIND_MIN(arr, size, type) \
    findMinimal_##type(arr, size);

#define FIND_MAX(arr, size, type) \
    findMaximum_##type(arr, size);

#define EDIT_ELEMENT(arr, size, type, position, element) \
    editElementToArray_##type(arr, size, position, element);

#pragma region Çàïîëíåíèå ìàññèâà
void fillArray_Int(int* arr, int size);
void fillArray_Double(double* arr, int size);
void fillArray_Char(char* arr, int size);
#pragma endregion

#pragma region Ïå÷àòü ìàññèâà
void printArray_Int(int* arr, int size);
void printArray_Double(double* arr, int size);
void printArray_Char(char* arr, int size);
#pragma endregion

#pragma region Ïîèñê ìèíèìàëüíîãî
int findMinimal_Int(int* arr, int size);
double findMinimal_Double(double* arr, int size);
char findMinimal_Char(char* arr, int size);
#pragma endregion

#pragma region Ïîèñê ìàêñèìàëüíîãî
int findMaximum_Int(int* arr, int size);
double findMaximum_Double(double* arr, int size);
char findMaximum_Char(char* arr, int size);
#pragma endregion

#pragma region Ñîðòèðîâêà
void sortArray_Int(int* arr, int size);
void sortArray_Double(double* arr, int size);
void sortArray_Char(char* arr, int size);
#pragma endregion

#pragma region Ðåäàêòèðîâàíèå ýëåìåíòà
void editElementToArray_Int(int* arr, int size, int position, int element);
void editElementToArray_Double(double* arr, int size, int position, double element);
void editElementToArray_Char(char* arr, int size, int position, char element);
#pragma endregion

