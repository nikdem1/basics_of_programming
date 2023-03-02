//Demidovich Nikita, RUDN, NKAbd-01-22, 02.12.2022.
//Дана целочисленная матрица размера  . Найти номер первой из ее строк, содержащих равное количество положительных 
//и отрицательных элементов (нулевые элементы матрицы не учитываются). Если таких строк нет, то вывести 0.

#include <iostream>
#include <cmath>

using namespace std;

void EnterMatrix(int** arr, int M, int N) {
	int** A = new int* [N];
	for (int i = 0; i < N; i++)
	{
		A[i] = new int[M];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}
}

void FindStr(int** arr, int M, int N, int p, int n, int k, int sum, int num) {
	int** A = new int* [N];
	for (int i = 0; i < N; i++)
	{
		p = n = k = 0;
		for (int j = 0; j < M; j++)
		{
			if (A[i][j] > 0) p++;
			if (A[i][j] < 0) n++;
		}
		if (p == n)
		{
			num = i;
			k++;
		}
	}
	if (k) cout << "Number of str: " << ++num << endl;
	else cout << 0 << endl;
}

int main()
{
	int M, N, p, n, k, sum, num;
	setlocale(LC_ALL, "Russian");
	cout << "Enter Matrix: " << endl;
	cin >> M, N;
	if (M > 0 and N > 0) {
		int** arr = new int* [M];
		for (int i = 0; i < M; i++) {
			*(arr + i) = new int[N];
		}
		EnterMatrix(arr, M, N);
		FindStr(arr, M, N, p, n, k, sum, num); 
		for (int i = 0; i < M; i++) { 
			delete[] arr[i]; 
		}
		delete[] arr;
	}
	else { cout << "Нельзя вводить отрицательные числа"; 
	} return 0;
}