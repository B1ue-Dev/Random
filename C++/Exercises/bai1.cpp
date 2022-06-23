#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	for (int i = 1; i <= min(X, Y); i++) {
		if (X % i == 0 && Y % i == 0) {
			cout << i << endl;
		}
	}
}