//Создать программу для поиска максимального числа из трех.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;

    cout << "Enter three numbers >> ";
    cin >> num_1 >> num_2 >> num_3;
    cout << "===============================" << endl;

    if (num_1 > num_2)
        if (num_1 > num_3)
            cout << "Max num: " << num_1 << endl;
        else
            cout << "Max num: " << num_3 << endl;
    else if (num_2 > num_3)
        cout << "Max num: " << num_2 << endl;
    else
        cout << "Max num: " << num_3 << endl;

    return 0;
}