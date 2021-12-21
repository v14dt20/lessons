// Создать программу анализа полученного числа. Если число меньше 5, 
// то умножить его на 3. Если оно от 5 до 7, 
// то поделить на 10. Если больше 7, то прибавить 3.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    float num = 0.0f;

    cout << "Enter num >> ";
    cin >> num;
    cout << "=====================" << endl;

    if (num < 5)
        cout << "Result: " << num * 3 << endl;
    else if (num >= 5 and num <= 7)
        cout << "Result: " << num / 10 << endl;
    else
        cout << "Result: " << num + 3 << endl;

    return 0;
}