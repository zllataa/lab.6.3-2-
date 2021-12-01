// Lab_06_3(1).cpp
// < Половка Злата >
// Лабораторна робота № 6.3(2)
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 0.6

#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1); a[0] = 3; a[1] = -22;
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];	
	if (i < size - 1)
		Print(a, size, i + 1);
	else
	cout << endl;
}

int Sum(int* a, const int size, int i, int S)
{
	S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

int Min(int* a, const int size, int i, int min) //найменший з непарних елементів масиву цілих чисел
{
	if (a[i] % 2 != 0 && a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int Max(int* a, const int size, int i, int max) //найбільший з парних елементів масиву цілих чисел

{
	if (a[i] % 2 == 0 && a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}

int main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 15;
	int a[n];
	int Low = -55;
	int High = 22;
	Create(a, n, Low, High, 0);
	cout << "| Масив:                                         |";
	Print(a, n, 0); 	
	cout << "|------------------------------------------------|---------------------------------------------------------------|" << endl;
	cout << "| Сума елементів масиву:                         |  ";
	cout << Sum(a, n, 0, 0) << setw(58) << "|" << endl; cout << fixed;
	cout << "|------------------------------------------------|---------------------------------------------------------------|" << endl;
	cout << "| Мінімальне значення непарних елементів масиву: |  ";
	cout << Min(a, n, 1, a[0]) << setw(59) << "|" << endl; cout << fixed;
	cout << "|------------------------------------------------|---------------------------------------------------------------|" << endl;
	cout << "| Максимальне значення парних елементів масиву:  |   ";
	cout << Max(a, n, 1, a[0]) << setw(59) << "|" << endl; cout << fixed;
	cout << "|------------------------------------------------|---------------------------------------------------------------|" << endl;
	return 0;
}
