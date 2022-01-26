#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	int a[n];
	cout << "Nhap du lieu: " << endl;
	
	// Xuat mang
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	cout << "\nXuat mang: " << endl;
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";

	// Tong cua mang
	int S = 0;
	for (int i = 1; i <= n; i++)
		S += a[i];
	cout << "\n\nTong la: " << S << endl;

	// Gia tri lon nhat
	int max = 0;
	for (int i = 1; i <= n; i++)
		if (a[i] > max)
			max = a[i];
	cout << endl;
	cout << "Gia tri lon nhat la: " << max << endl;

	// Gia tri nho nhat
	int min = INT_MAX;
	for (int i = 1; i <= n; i++)
		if (a[i] < min)
			min = a[i];
	cout << endl;
	cout << "Gia tri nho nhat la: " << min << endl;

	// Tinh am duong
	int am = 0, duong = 0, ko = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < 0)
			am++;
		else if (a[i] > 0)
			duong++;
		else if (a[i] == 0)
			ko++;
	}
	cout << endl;
	cout << "So phan tu am la: " << am << endl;
	cout << "So phan tu duong la: " << duong << endl;
	cout << "So phan tu khong la: " << ko << endl;

	// Tinh chan le
	int chan = 0, le = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] % 2 == 0)
			chan++;
		else
			le++;
	}
	cout << endl;
	cout << "So phan tu chan la: " << chan << endl;
	cout << "So phan tu le la: " << le << endl;

	return 0;
}