#include <bits/stdc++.h>
using namespace std;


/*
Viết chương trình nhập vào số nguyên n (n≤107). In ra tất cả các ước số của n. (Ước số của n là các số nguyên mà n chia hết)
Ví dụ: n=10 thì in ra các số: 1 2 5 10
Dữ liệu vào
Một số nguyên dương n.
Kết quả
In ra các ước số của n.

Sample Input 1: 10
Sample Output 1: 1 2 5 10
*/


int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N/2; i++) {
		if (N % i == 0) {
			cout << i << " ";
		}
	}
	cout << N;




	return 0;
}