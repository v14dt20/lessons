//Вычислить сумму S = 1 + 2 - 3 + 4 + 5 - 6 ... до N слагаемых
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    system("color 3");

    int N = 0;
    int sum = 0;

    cout << "Enter N >> ";
    cin >> N;
    cout << "=======================" << endl;

    for (int i = 1; i < N + 1; ++i)
        if (i % 3 == 0)
            sum -= i;
        else 
            sum += i;

    cout << "S = " << sum << endl;
    
    return 0;
}