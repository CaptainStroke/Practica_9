//Тема: Массивы одномерные

//Задания для самостоятельной работы 1

//Задание 1. Сжать(сдвинуть элементы) массив, удалив из него все 0, и заполнить освободившиеся справа элементы значениями - 1.

#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;
int main()
{
	const int SIZE = 100;
	int ar[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << ", ";
	}
	cout << "\n original \n ";
	sort(ar, ar + SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << ar[i] << ", ";
	}
	cout << "\n sorted with zeros \n";

	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] == 0) ar[i] = 100;
		cout << ar[i] << ", ";
	}
	cout << "\n zeros swapped with number exceeding in the range\n ";
	sort(ar, ar + SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << ar[i] << ", ";
	}
	cout << "\nmoved to the rirht end of array\n" ;
	for (int i = 0; i < SIZE; i++)
	{
		if (ar[i] == 100) ar[i] = -1;
		cout << ar[i] << ", ";
	}
	cout << "\n hundreds changed to minus one";


}
// Задание 2. Написать программу, копирующую элементы 2 - х массивов размером 5 элементов каждый
//в один массив размером 10 элементов следующим образом : сначала копируются последовательно все элементы, большие 0,
// затем последовательно все элементы, равные 0, а затем последовательно все элементы, меньшие 0.

// Тема: Сортировка массивов
//Задания для самостоятельной работы 2

//Задание 1. Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырьковой сортировки.

//Задание 2. Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок.

//Задание 3. Написать программу «успеваемость».Пользователь вводит 10 оценок студента.Реализовать меню для пользователя
// ■ Вывод оценок(вывод содержимого массива);
// ■ Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку);
// ■ Выходит ли стипендия(стипендия выходит, если 	средний бал не ниже 10.7).
	
// Задание 4. Написать программу, выполняющую сортировку одномерного массива целых чисел методом быстрого поиска.

//Задание 5. Необходимо отсортировать первые две трети 	массива в порядке возрастания если среднее арифметическое
//всех элементов больше нуля; иначе — лишь первую треть. Остальную часть массива не сортировать, а расположить в обратном порядке