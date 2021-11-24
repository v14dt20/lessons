// Условие: Последовательность целых чисел вводится с клавиатуры. Первое введенное
// число не является элементом последовательности, а задает количество элементов
// последовательности. Определить, что вводится раньше в последовательности:
// положительные или отрицательные числа (все введенные элементы могут быть нулевыми).
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    system("color 3");

    int N = 0;
    int num = 0;

    cout << "Enter sequence >> ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num == 0)
            continue;
        else if (num < 0) {
            cout << "The first number is negative" << endl;
            break;
        }
        else {
            cout << "The first number is positive" << endl;
            break;
        }
    }
    if (num == 0)
        cout << "All sequense is 0";
    return 0;
}
