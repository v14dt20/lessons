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
    cout << "============================" << endl;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < N; ++j)
            if (j >= N - i)
                cout << "* ";
            else
                cout << " ";
        cout << endl;
    }

    return 0;
}
