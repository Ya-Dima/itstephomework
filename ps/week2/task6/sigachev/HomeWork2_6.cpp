﻿//Вывести все числа от нуля до введенного пользователем
#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	cout << "\n";				// Пустая строка добавлена для более читабельного вывода

	//############################ цикл for ########################################
	/*	for (int i = 0; i <= number; ++i) {
		cout << i << " ";
		}*/
	//############################ цикл while ######################################
	/*	int i = 0;
		while (i < number) {
		i++;
		cout << i << " ";
		}*/
	//############################ цикл do....while ################################
		int i = 0;
		do {
		cout << i << " ";
		i++;
		} while (i <= number);
	cout << "\n";				// Пустая строка добавлена для более читабельного вывода
}