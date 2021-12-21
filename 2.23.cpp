// Посчитать количество элементов, совпадающих с максимальным. Последовательность 
// задана формулой общего члена (см. предыдущую задачу).
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");

    int n = 0;
    int count = 0;
    float a_1 = 0.0f;
    float max = -1.0f;

    cout << "Enter n >> ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        a_1 = sin(n + (i / n));
        
        if (a_1 > max) {
            max = a_1;
            count = 0;
        }

        if (a_1 == max)
            ++count;
    }

    cout << "========================" << endl;
    cout << "Count max num: " << count << endl;

    return 0;
}