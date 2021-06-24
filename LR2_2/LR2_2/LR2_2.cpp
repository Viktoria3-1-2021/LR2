//Реализуйте сортировку массива вставками. (массив из целых чисел).

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int m = 10;
	int a[m];
	int temp, j;
	cout << "Исходный массив:" << endl;
	srand(time(0));
	for (int i = 0; i < m; i++)
	{

		a[i] = rand() % 100; //заполнение массива с помощью датчика генерации случайных чисел;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < m; i++)
	{
		temp = a[i];//вспомогательная переменная; 
		j = i - 1;
		while (temp < a[j] && j >= 0) //сортировка по возрастанию. Ее смысл в том, что каждый элемент сравнивается со всеми предыдущими и занимает нужную позицию; 
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}

