//Дан массив целых чисел. Отсортировать его сортировкой вставками.
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE] = {};

    for (int i = 0; i < SIZE; ++i)//инициализация массива числами от 0 до 100
        arr[i] = rand() % 100;

    cout << "Not sorted array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "=============================================" << endl;

    for(int i = 1; i < SIZE; ++i)     
	    for(int j = i; j > 0 and arr[j - 1] > arr[j]; --j)
			swap(arr[j - 1], arr[j]);

    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "=============================================" << endl;
    
    return 0;
}