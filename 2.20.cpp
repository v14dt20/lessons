//Условие: вычислить значение выражения (см. дискорд от 29.11.21)
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    int n = 0;
    float sum = 0;

    cout << "Enter n >> ";
    cin >> n;
    
    for (int i = 0; i < n; ++i)
        sum += sin(n + i / n);

    cout << "========================" << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}