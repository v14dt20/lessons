// Условие: Дано натуральное число N. Найьт сумму цифр этого числа.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    int N = 0;
    int sum = 0;
    cout << "Enter number - N >> ";
    cin >> N;
    cout << "========================" << endl;
    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }
    cout << "Sum elements: " << sum;
    return 0;
}
