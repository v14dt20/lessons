//перевернуть массив целых чисел.
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE] = {};
    int max_index = SIZE - 1;
    int min_index = 0;

    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand() % 100;

    cout << "First array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "==========================" << endl;

    for (int i = 0; i < (SIZE / 2); ++i) {
        swap(arr[max_index], arr[min_index]);
        --max_index;
        ++min_index;
    }
        
    cout << "Second array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "==========================" << endl;

    return 0;
}
