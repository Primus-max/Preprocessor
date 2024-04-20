#include "function.h"
#include <cstdlib> 
#include <ctime>   
#include <iostream>

using namespace std;

#pragma region Заполнение массива
void fillArray_Int(int* arr, int size) {
	srand(time(NULL));

	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
	}
}

void fillArray_Double(double* arr, int size) {
	srand(time(NULL));

	for (int i = 0; i < size; ++i) {
		arr[i] = (rand() % 10000) / 100.0;
	}
}

void fillArray_Char(char* arr, int size) {
	srand(time(NULL));

	for (int i = 0; i < size; ++i) {
		arr[i] = 'a' + rand() % 26;
	}
}
#pragma endregion

#pragma region Печать массива
void printArray_Int(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray_Double(double* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray_Char(char* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
#pragma endregion

#pragma region Поиск минимального
int findMinimal_Int(int* arr, int size) {
	int minimal = arr[0];

	for (size_t i = 0; i < size; i++)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

double findMinimal_Double(double* arr, int size) {
	double minimal = arr[0];

	for (int i = 0; i < size; ++i)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

char findMinimal_Char(char* arr, int size) {
	char minimal = arr[0];
	for (int i = 1; i < size; ++i)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

#pragma endregion

#pragma region Поиск максимального
int findMaximum_Int(int* arr, int size) {
	int maximum = arr[0];
	for (int i = 1; i < size; ++i) 
		if (arr[i] > maximum) 
			maximum = arr[i];		
	
	return maximum;
}

double findMaximum_Double(double* arr, int size) {
	double maximum = arr[0];
	for (int i = 1; i < size; ++i) 
		if (arr[i] > maximum) 
			maximum = arr[i];		
	
	return maximum;
}

char findMaximum_Char(char* arr, int size) {
	char maximum = arr[0];
	for (int i = 1; i < size; ++i) 
		if (arr[i] > maximum) 
			maximum = arr[i];		
	
	return maximum;
}
#pragma endregion

#pragma region Сортировка
void sortArray_Int(int* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sortArray_Double(double* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sortArray_Char(char* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
#pragma endregion

#pragma region Редактирование элемента
void editElementToArray_Int(int* arr, int size, int position, int element) {
	if (position >= 0 && position < size) {
		arr[position] = element;
	}
	else {
		cout << "Ошибка: попытка редактирования элемента вне диапазона массива." << endl;
	}
}

// Функция для редактирования элемента массива чисел с плавающей запятой
void editElementToArray_Double(double* arr, int size, int position, double element) {
	if (position >= 0 && position < size) {
		arr[position] = element;
	}
	else {
		cout << "Ошибка: попытка редактирования элемента вне диапазона массива." << endl;
	}
}

// Функция для редактирования элемента массива символов
void editElementToArray_Char(char* arr, int size, int position, char element) {
	if (position >= 0 && position < size) {
		arr[position] = element;
	}
	else {
		cout << "Ошибка: попытка редактирования элемента вне диапазона массива." << endl;
	}
}

#pragma endregion
