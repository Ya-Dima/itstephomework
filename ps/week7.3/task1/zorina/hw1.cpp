﻿//Используя два указателя на массив целых чисел, скопировать один массив в другой. 
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования

#include <iostream>

int main()
{
	//прекрасно работает так, не поняла, зачем вводить дополнительно указатели, но здесь и далее задание требует, добавляю,
	//хотя сначала все задания сделала без указателей, но формулировка заданий меня смутила все переделала, 
	//вроде мой первый вариант тоже с указателями, просто они называются также, как переменные и без р вначале, в общем, я запуталась,
	//объясни, пожалуйста, как правильно))
	/*int const size = 5;
	int arr[size] = { 1,2,3,4,5 }, arrCopy[size] = {};
		for (int i = 0; i < size; ++i)
	{
		*(arrCopy + i) = *(arr + i);
		std::cout << *(arrCopy + i) << " ";
	}*/

	int const size = 5;
	int arr[size] = { 1,2,3,4,5 }, arrCopy[size];
	int* pArr = &arr[0];
	int* pArrCopy = &arrCopy[0];
	for (int i = 0; i < size; ++i)
	{
		*(pArrCopy + i) = *(pArr + i);
		std::cout << *(arrCopy + i) << " ";
	}
}