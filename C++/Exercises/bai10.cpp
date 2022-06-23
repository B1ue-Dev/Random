#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/*
F(6) = |6-1-2-3| = 0
F(7) = |7-1-2-3-4| = -3
*/


int main() {
	int X;
	cin >> X;
	vector<int> a;
	
	for (int i = 0; i <= X; i++) {
		if (i != 0 && X % i == 0) {
			a.push_back(i);
		}
	}
	cout << "We are here." << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	/*
	UNDER CONSTRUCTION
	*/
}