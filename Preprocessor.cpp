#include "function.h"
#include <iostream>

using namespace std;

int main() {
	const int size = 5;
	int intArray[size];
	double doubleArray[size];
	char charArray[size];

	// Заполнение и печать массива целых чисел
	FILL_ARRAY(intArray, size, Int);
	PRINT_ARRAY(intArray, size, Int);
	cout << "Min int value " << FIND_MIN(intArray, size, Int);
	cout << endl;
	cout << "Max int value " << FIND_MAX(intArray, size, Int);
	cout << endl;
	EDIT_ELEMENT(intArray, size, Int, 0, 10);
	cout << "Edited element ";
	PRINT_ARRAY(intArray, size, Int);

	// Заполнение и печать массива действительных чисел
	FILL_ARRAY(doubleArray, size, Double);
	PRINT_ARRAY(doubleArray, size, Double);
	cout << "Min double value " << FIND_MIN(doubleArray, size, Double);
	cout << "Max double value " << FIND_MAX(doubleArray, size, Double);
	EDIT_ELEMENT(doubleArray, size, Double, 0, 10.0);
	cout << "Edited element ";
	PRINT_ARRAY(doubleArray, size, Double);

	// Заполнение и печать массива символов
	FILL_ARRAY(charArray, size, Char);
	PRINT_ARRAY(charArray, size, Char);
	cout << "Min char value " << FIND_MIN(charArray, size, Char);
	cout << endl;
	cout << "Max double value " << FIND_MAX(charArray, size, Char);
	cout << endl;
	EDIT_ELEMENT(charArray, size, Char, 0, 'a');
	cout << "Edited element ";
	PRINT_ARRAY(charArray, size, Char);
}
