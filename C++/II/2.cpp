#include <bits/stdc++.h>
using namespace std;


int main()
{
	int d = 0;
	string s, kitudau, text;
	cout << "Nhap xau: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			d++;
		}
	}
	cout << "So chu so la : " << d;
	// Ki tu dau viet hoa
	kitudau = toupper(s[0]);
	text = kitudau + s.substr(1);
	cout << "\nXau sau khi viet hoa la: " << text;

	return 0;
}