// Найти максимальный элемент в последовательности (его значение и номер). 
// Последовательность элементов задана формулой общего члена (см. задачу 2.20)
// Если элементов с максимальным значением несколько, то узнать позицию и первого, и последнего максимального элемента.
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");

    int n = 0;
    int count = 0;
    int count_2 = 1;
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
    cout << "Max num: " << max << endl;

    if (count > 1) {
        for (int i = 0; i < n; ++i) {
            a_1 = sin(n + i / n);

            if (a_1 == max) {
                if (count_2 == 1) {
                    cout << "========================" << endl;
                    cout << "First max num: " << i + 1 << endl;
                }
                if (count_2 == count) {
                    cout << "========================" << endl;
                    cout << "Last max num: " << i + 1 << endl;
                }     
            }

            ++count_2;
        }
        
    }

    return 0;
}