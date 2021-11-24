// Условие: Последовательность из N положительных чисел вводится с клавиатуры.
// Найти сумму максимального и минимального элементов последовательности.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    system("color 3");

    int N = 0;
    int num = 0;
    int max = 0;
    int min = 2147483647;
    int sum = 0;

    cout << "Enter sequence length - N >> ";
    cin >> N;
    cout << "=================" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "Enter number >> ";
        cin >> num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    cout << "=================" << endl;

    sum = max + min;
    cout << "Sum max and min: " << sum << endl;
    return 0;
}
