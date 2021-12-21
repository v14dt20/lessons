//Условие: Построить пустой куб из звездочек.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    //system("color 3");
    
    int N = 0;
    int d = 0;

    cout << "Enter side cube - N >> ";
    cin >> N;
    cout << "==============================" << endl;

    d = N / 2;

    for (int i = 0; i < d; ++i)
        cout << " ";
    for (int i = 0; i < N; ++i)
        cout << "* ";
    cout << endl;


    for (int i = 0; i < d - 1; ++i) {
        for (int j = 1; j < d - i; ++j)
            cout << " ";
        cout << "* ";
        for (int j = 0; j < N - 2; ++j)
            cout << "  ";
        cout << "*";
        for (int j = 0; j < i; ++j)
            cout << " ";
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < N; ++i)
        cout << "* ";
    for (int i = 0; i < d - 2; ++i)
        cout << " ";
    cout << "*";
    cout << endl;

    for (int i = 0; i < N - d - 1; ++i) {
        cout << "* ";
        for (int j = 0; j < N - 2; ++j)
            cout << "  ";
        cout << "* ";
        for (int j = 0; j < d - 2; ++j)
            cout << " ";
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < d - 1; ++i) {
        cout << "* ";
        for (int j = 0; j < N - 2; ++j)
            cout << "  ";
        cout << "*";
        for (int j = 1; j < d - i - 1; ++j)
            cout << " ";
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < N; ++i)
        cout << "* ";
    cout << endl;

    return 0;
}
