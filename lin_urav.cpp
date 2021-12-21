#include <iostream>
#include <cmath>

using namespace std;

// f(x) = x^3 - x - 1
//f'(x) = 3x^2 - 1
//f''(x) = 6x
//[1, 2]
//f(1) = 1 - 1 - 1 = -1
//f(2) = 8 - 2 - 1 = 5
//f(1) * f(2) < 0
//метод половинного деления
//c = (a + b) / 2
//f(a) * f(c) < 0 ?
//f(b) * f(c) < 0 ?
//одна из них не удовлетворяет, её отбрасываем и т.д

//метод Ньютона
//f(a) * f''(a) > 0
//-1 * 6 > 0 - false
//f(b)  * f''(b) > 0
//5 * 12 > 0 - true => x0 = b

//Метод итераций
// f(x) = 0.1*x^2 - x*ln(x)
// f'(x) = 1/5*x - ln(x) - 1
// f''(x) = 1/5 - 1/x;
// [1, 2]
// ф(x) = x + λ(0.1*x^2 - x*ln(x))
// -1/r < λ < 0, если f'(x) > 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|)
// λ = 1/20 = 0.05

float f(float x) {
    return x*x*x - x - 1;
}

float diff(float x) {
    return (3 * x * x) - 1;
}

float dif2f(float x) {
    return 6 * x;
}

int main() {

    float a = 0.0f, b = 0.0f, c = 0.0f;
    double eps = 0.000001f;
    a = 1.0f;
    b = 2.0f;
    while (b - a > eps) {
        if (f(a) * f(2) < 0) {
            c = (a + b) / 2;
            if (f(a) * f(c) < 0)
                b = c;
            else if (f(b) * f(c) < 0)
                a = c;
            else
                break;
        }
        else {
            cout << "Polovin del ne robit" << endl;
            break;
        }
    }
    cout << a << " " << b << endl;

    // float x = 2.0f, x0 = 0.0f;
    // double eps = 0.000001f;
    //
    // while (abs(x - x0) > eps) {
    //     x0 = x;
    //     x = x0 - f(x0)/diff(x0);
    // }
    // cout << x << endl;


    return 0;
}
