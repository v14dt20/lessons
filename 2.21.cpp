//Числа вводятся с клавиатуры до тех пор, пока не встретится число 0 
//(0 — признак окончания ввода). Проверить, упорядочены ли числа по возрастанию.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    //system("color 3");

    float num = 0;
    float buf = 0;
    bool flag = true;

    cout << "Enter numbers >> ";
    cin >> num;

    while (true) {
        buf = num;
        cin >> num;

        if (num == 0)
            break;

        if (num < buf)
            flag = false;
    }

    if (flag) {
        cout << "=====================" << endl;
        cout << "Yes" << endl;
    }
    else {
        cout << "=====================" << endl;
        cout << "No" << endl;
    }
    return 0;
}