//Условие: вычислить значение выражения (см. дискорд от 23.11.21)
#include <iostream>
#include <stdlib.h>

using namespace std;

float my_pow(float x, int step) {
    int res = 1;
    for (int i = 0; i < step; ++i)
        res *= x;
    return res;
}


int fact(int i) {
    if (i <= 1)
        return 1;
    else
        return i * fact(i - 1);
}


int main() {
    system("color 3");
    float x = 0;
    float n = 0;
    float sum  = 0;

    cout << "Enter x, n >> ";
    cin >> x >> n;
    cout << "=================" << endl;
    for (int i = 0; i < n; ++i)
        sum += my_pow(x, i) / fact(i);
    cout << "Result: " << sum << endl;
    return 0;
}
