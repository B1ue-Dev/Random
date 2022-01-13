#include <bits/stdc++.h>
using namespace std;
// Create a function that list all the prime numbers in a given range
int main()
{
	int x, y, count = 0;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	// Check if x and y meet the conditions
	if (x > y || x < 2) {
		cout << "Invalid input" << endl;
		return 0;
	} else {
		// Loop through the numbers in the range
		for (int i = x; i <= y; i++)
		// Check if the number is prime
			{ for (int j = 1; j <= i; j++) {
				if(i % j == 0)
					count++; }
				if (count == 2)
					cout << i << " ";
				count = 0; }
			}
	return 0;
}
