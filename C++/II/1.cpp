#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, k, s = 0, dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "Nhap k: ";
	cin >> k;
	cout << "Vi tri cua k la: ";

	for (int i = 0; i < n; i++) {
		if(a[i] == k) {
			cout << i << " ";
		}
	}

	for (int i = 0; i < n; i++) {
		if(a[i] >= k) {
			s = s + a[i];
			dem = dem + 1;
		}
	}
	cout << "\nTrung binh cong cac so lon hoac bang: "<< s/dem;

	return 0;
}