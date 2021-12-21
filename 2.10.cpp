// Условие: Последовательность целых чисел вводится с клавиатуры. Первое введенное
// число не является элементом последовательности, а задает количество элементов
// последовательности. Необходимо найти первый max элемент в последовательности.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    //system("color 3");

    int N = 0;
    int max = 0;
    int num = 0;

    cout << "Enter sequence >> ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num > max)
            max = num;
    }

    cout << "====================================" << endl;
    cout << "Max element: " << max << endl;

    return 0;
}
