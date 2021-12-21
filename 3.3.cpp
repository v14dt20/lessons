//Дан массив целых чисел. Отсортировать его сортировкой простыми обменами (пузырьком).
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE] = {};
    int min = 0;

    for (int i = 0; i < SIZE; ++i)//инициализация массива числами от 0 до 100
        arr[i] = rand() % 100;

    cout << "Not sorted array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "=============================================" << endl;

    for(int i = 0; i < SIZE; ++i)
	    for(int j = 0; j < SIZE - 1; ++j)
			if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "=============================================" << endl;
    
    return 0;
}