//Посчитать сумму N натуральных чисел.
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
	//system("color 3");

	int N = 0;
	int num = 0;
	int sum = 0;

	cout << "Enter N >> ";
	cin >> N;
	cout << "=====================" << endl;

	for (int i = 0; i < N; ++i) {
		cin >> num;
		sum += num;
	}

	cout << "=====================" << endl;
	cout << "Sum: " << sum << endl;

	return 0;
}