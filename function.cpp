#include "function.h"
#include <cstdlib> 
#include <ctime>   
#include <iostream>

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

#pragma region FindMinimal
int findIntMinimal(int* arr, int size) {
	int minimal = arr[0];

	for (size_t i = 0; i < size; i++)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

double findDoubleMinimal(double* arr, int size) {
	double minimal = arr[0];

	for (int i = 0; i < size; ++i)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

char findCharMinimal(char* arr, int size) {
	char minimal = arr[0];
	for (int i = 1; i < size; ++i)
		if (arr[i] < minimal)
			minimal = arr[i];

	return minimal;
}

#pragma endregion