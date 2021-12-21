// Условие: напечатать заполненный прямоугольный равнобедренный треугольник из *
// со сторонами катетов, равными N, и прямым углом справа сверху,
// где N — натуральное число больше 2.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    //system("color 3");

    int N = 0;

    cout << "Enter base - N >> ";
    cin >> N;
    cout << "============================" << endl;

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
