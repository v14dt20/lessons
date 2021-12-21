//Условие: посчитать сумму S = 1*2 + 2*3*4 + 3*4*5*6 + 4*5*6*7*8 + .... до N (натурального числа).
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    system("color 3");

    int N = 0;
    int sum = 0;
    int buf = 1;

    cout << "Enter N >> ";
    cin >> N;
    cout << "====================" << endl;

    for (int i = 1; i <= N; ++i) {
        buf = i;
        for (int j = i + 1; j <= i * 2; ++j)
            buf *= j;
        sum += buf;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
