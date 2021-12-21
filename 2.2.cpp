//Посчитать произведение N натуральных чисел.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
	system("color 3");

	int N = 0;
	int num = 0;
	int mult = 1;

	cout << "Enter N >> ";
	cin >> N;
	cout << "=====================" << endl;

	for (int i = 0; i < N; ++i) {
		cin >> num;
		mult *= num;
	}

	cout << "=====================" << endl;
	cout << "Multiplication: " << mult << endl;

	return 0;
}