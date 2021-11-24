// Условие: вычислить сумму S = -1 + 2 - 3 + 4 - 5 + 6 - ... до N слагаемых.
// Дополнительно написать алгоритм для суммы всех чисел, кратных Z.
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
    system("color 3");

    int N = 0;
    int Z = 0;
    int sum = 0;
    int sum_Z = 0;

    cout << "Enter N, Z >> ";
    cin >> N >> Z;
    cout << "=======================" << endl;

    for (int i = 1; i <= N; ++i) {
        sum += i * pow(-1, i);
    }

    cout << "Sum: " << sum << endl;
    cout << "=======================" << endl;

    for (int i = 1; i <= N; ++i) {
        if (i % Z == 0)
            sum_Z += i;
    }
    cout << "Sum numbers is multiple " << Z <<": " << sum_Z << endl;
    
    return 0;
}
