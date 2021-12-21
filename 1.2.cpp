//Создать программу для деления двух чисел, одно на другое. Учесть, что они могут быть равными 0.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    float num_1 = 0.0f;
    float num_2 = 0.0f;

    cout << "Enter two numbers >> ";
    cin >> num_1 >> num_2;
    cout << "==================================" << endl;

    if (num_2 == 0)
        cout << "Num_1 / num_2: error. Division by zero" << endl;
    else 
        cout << "Num_1 / num_2 = " << num_1 / num_2 << endl;
    
    cout << "==================================" << endl;

    if (num_1 == 0)
        cout << "Num_2 / num_1: error. Division by zero" << endl;
    else 
        cout << "Num_2 / num_1 = " << num_2 / num_1 << endl;

    return 0;
}