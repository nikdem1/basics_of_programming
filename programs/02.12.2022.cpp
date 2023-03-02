//Дана матрица. Вывести ее элементы, расположенные в строках с четными номерами (2, 4, …). 
//Вывод элементов производить по строкам, условный оператор не использовать.

//Demidovich Nikita, RUDN, NKAbd-01-22, 02.12.2022.
#include <iostream>
#include <ctime>

using namespace std;

int arr[100][100]; // двумерный массив
int i, j, M, N; // счётчики и размеры матрицы

void MakeMatrix(int **arr, int M, int N) {
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            arr[i][j] = rand() % 10;    //запись в матрицу случайных чисел от 1 до 9
        }
    }
}

void PrintMartix(int **arr, int M, int N) {
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << arr[i][j] << " ";  //вывод элементов
        }
        cout << endl;
    }
}

void PrintEvenElements(int **arr, int M, int N) {
    for (i = 0; i < N; i += 2) {
        for (j = 0; j < M; j += 2) {
            cout << arr[i][j] << " ";  //вывод элементов с чётными координатами
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0)); // автоматическая рандомизация
    setlocale(LC_ALL, "Russian"); //добавление русского языка
    cout << "Данная программа выводит элементы, находящиеся в строках с четным номером\n";
    cout << "\nВведите размеры матрицы (M * N): ";
    int M, N;
    cin >> M; cin >> N; // вводим размеры NxM
    if (M > 0 and N > 0) {
        int** arr = new int* [M];for (int i = 0; i < M; i++) {
            *(arr + i) = new int[N];
        }
        MakeMatrix(arr, M, N);
        PrintMartix(arr, N, M);
        PrintEvenElements(arr, N, M);
        for (int i = 0; i < M; i++) { 
            delete[] arr[i]; }
        delete[] arr;
    }
    else { 
        cout << "Нельзя вводить отрицательные числа"; 
    }
    return 0;
}