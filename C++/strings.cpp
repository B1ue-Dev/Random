#include <bits/stdc++.h>
using namespace std;

// String things

int main()
{	
	string s; int dem;
	cout << "Nhap xau s: ";
	getline(cin, s);
	cout << "\nXau s la: " << s;
	
	cout << "\nSo ki tu xau s la: " << s.length(); // length() la ham tra ve so ki tu cua xau

	cout << "\nCac ki tu cua s: "; // Tra ve cac ki tu cua chuoi s
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i] << " " ;
	}

	cout << "\nSo ki tu trang: "; // Tra ve so ki tu trang
	for (int i = 0; i < s.length(); i++) // Duyet tung ki tu cua chuoi s
	{
		if (s[i] == ' ') // Neu trong chuoi s co ki tu trang
		{
			dem++;
			// Gia tri dem luc dau la 0, neu tim thay ki tu trang thi tang dem len 1
			// tuc la dem++
		}
	}
	cout << dem; // In ra so ki tu trang trong chuoi s

	for (int i = s.length(); i >= 0; i--)
	{
		cout << s[i];
	}

	return 0;
}