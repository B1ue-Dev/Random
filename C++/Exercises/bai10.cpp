#include <iostream>
using namespace std;

/*
Sum of divisors.

Example:
X = 12 -> sum(X): 1 + 2 + 3 + 4 + 6 + 12 = 28
*/

int main() {
	int X, tong = 0;
	cin >> X;

	for (int i = 0; i <= X/2; i++) {
		if (i != 0 && X % i == 0) {
			tong += i;
		}
	}
	cout << tong + X << endl;

	return 0;
}
