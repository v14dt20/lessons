// Условие: Решите квадратное уравнение вида ax^2 + bx + c = 0. Коэффициенты
// уравнения вводятся с клавиатуры.
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    float a = 0;
    float b = 0;
    float c = 0;
    float Discr = 0;
    float x1 = 0;
    float x2 = 0;

    cout << "Enter a, b, c >> ";
    cin >> a >> b >> c;
    cout << "======================" << endl;
    Discr = b * b - 4 * a * c;

    if (Discr > 0) {
        x1 = (-b + sqrt(Discr)) / (2 * a);
        x2 = (-b - sqrt(Discr)) / (2 * a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    }
    else if (Discr == 0) {
        x1 = -b / (2 * a);
        cout << "x = " << x1 << endl;
    }
    else
        cout << "No solutions";
    return 0;
}
