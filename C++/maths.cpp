
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Exercise: Create a program that take value a, b and c
	// to solve this: ax^2 + bx + c = 0
	int a, b, c, delta;
	cout << "Chuong trinh giai ax^2 + bx + c = 0" << endl;
	cout << endl;
	cout << "Nhap a, b va c: ";
	cin >> a >> b >> c;
	if (a==0) {
		cout << "Phuong trinh vo nghiem (a =! 0)" << endl;
	} else
	cout << "Delta bang: " << pow(b, 2) - 4*a*c << endl;
	cout << endl;
	// giai phuong trinh khi thoa delta
	delta = pow(b, 2) - 4*a*c;
	if (delta<0) { // delta be hon 0
		cout << "Phuong trinh vo nghiem (delta < 0)" << endl;
	} else if (delta==0) { // delta bang 0
		cout << "Phuong trinh co nghiem kep la: x1 = x2 = " << -b/2*a << endl;
	} else if (delta>0) { // delta lon hon 0
		cout << "Phuong trinh co 2 nghiem" << endl;
		cout << "x1 = " << (-b+sqrt(delta))/(2*a) << endl;
		cout << "x2 = " << (-b-sqrt(delta))/(2*a) << endl;
	}

	return 0;
}
