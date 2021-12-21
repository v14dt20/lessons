//Дано натуральное число N. Поменять порядок цифр числа N на обратный.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");

    int num;

    cout << "Enter 3-digits number >> ";
    cin >> num;
    cout << "======================" << endl;

    cout << "Result: " << (num % 10) * 100 + (num % 100 / 10) * 10 + num / 100 << endl;

    return 0;
}