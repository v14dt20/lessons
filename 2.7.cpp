// Условие: Напечатать квадрат из N звездочек. Реализовать все три варианта.
//
// А) В котором ВСЕГО N звездочек.
// Б) Заполненный квадрат со стороной N.
// В) Пустой квадрат со стороной N. В каждом из вариантов задать требования к минимальному N.
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
    //system("color 3");

    int N = 0;

    cout << "Enter square area - N (N = 1, 4, 9, 16 ...) >> ";
    cin >> N;
    cout << "====================================================" << endl;

    for (int i = 0; i < sqrt(N); ++i) {
        for (int j = 0; j < sqrt(N); ++j)
            cout << "* ";
        cout << endl;
    }

    cout << "====================================================" << endl;
    cout << "Enter side square - N (N > 0) >> ";
    cin >> N;
    cout << "====================================================" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << "* ";
        cout << endl;
    }

    cout << "====================================================" << endl;
    cout << "Enter side square - N (N > 0) >> ";
    cin >> N;
    cout << "====================================================" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0 or i == N - 1)
                cout << "* ";
            else if (j == 0 or j == N - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
