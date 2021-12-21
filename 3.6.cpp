//За один просмотр (т.е. один цикл) найти и минимальный, и максимальный элемент массива (массив целых чисел).
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE] = {};
    int max = 0;
    int min = 0;

    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand() % 100;
    min = arr[0];

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "==========================" << endl;

    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;

    return 0;
}