// Условие: дано натуральное число N. Входит ли цифра Z в запись этого числа.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    system("color 3");

    int N = 0;
    int Z = 0;
    bool flag = false;

    cout << "Enter N, Z >> ";
    cin >> N >> Z;
    cout << "=====================" << endl;

    while (N != 0) {
        if (N % 10 == Z)
            flag = true;
        N /= 10;
    }

    if (flag)
        cout << "True";
    else
        cout << "False";

    return 0;
}
