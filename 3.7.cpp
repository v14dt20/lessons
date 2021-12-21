//задан одномерный массив целых чисел. Проверить, упорядочен ли он по возрастанию.
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE] = {};
    bool flag = true;
    
    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand() % 100;

    for (int i = 1; i < SIZE; ++i)
        if (arr[i] < arr[i - 1]) {
            flag = false;
            break;
        }
    
    cout << "Array: ";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl << "==========================" << endl;

    if (flag)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl; 

    return 0;
}