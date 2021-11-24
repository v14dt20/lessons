// Условие: напечатать в консоли равнобедренный треугольник из звездочек (*)
// с вершиной, направленной вверх, и основанием N, где N — натуральное нечетное
// число больше 3.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    system("color 3");

    int N = 0;

    cout << "Enter base - N >> ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < N - i; j++)
            cout << ' ';

        for (int j = N - 2 * i; j <= N; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
