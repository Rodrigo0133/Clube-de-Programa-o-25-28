#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
	int nr, num[100];
	cin >> nr;
	if (nr > 0 || nr <= 100) {
		for (int i = 0; i <= nr - 1; i++) {
			cin >> num[i];
			if (num[i] % 3 == 0) {
				if (num[i] % 5 == 0) {
					cout << "FizzBuzz\n";
				}
				else {
					cout << "Fizz\n";
				}

			}
			else if (num[i] % 5 == 0) {
				if (num[i] % 3 == 0) {
					cout << "FizzBuzz\n";
				}
				else
				{
					cout << "Buzz\n";
				}
			}
			else {
				cout << i + 1 << "\n";
			}

		}
	}
	else {
		cout << "Error\n";
	}
	return 0;
}