#include <bits/stdc++.h>
using namespace std;


/*
Trong số học, số phong phú là các số mà tổng các ước số của số đó (không kể chính nó) lớn hơn số đó. Ví dụ, số 12 có tổng các ước số (không kể 12) là 1+2+3+4+6=16>12. Do đó 12 là một số phong phú.
Bạn hãy lập trình đếm xem có bao nhiêu số phong phú trong đoạn [L,R].

Dữ liệu vào
Gồm 2 số L,R (1≤L≤R≤106)

Kết quả
Gồm 1 số nguyên duy nhất là số số phong phú trong đoạn [L,R].

Sample Input 1:
1 
50
Sample Output 1: 9
Giải thích: Từ 1 đến 50 có 9 số phong phú là: 12,18,20,24,30,36,40,42,48
*/


bool kiemtra(int j)
{
	int dem = 0;
	for (int i = 1; i < j; i++) {
		if (j % i == 0) {
			dem += i;
		}
	}

	if (dem>j) {
		return true;
	} else {
		return false;
	}
}

int main()
{
	int L, R, cnt = 0;
	cin >> L >> R;

	for (int i = L; i <= R; i++)
	{
		if (kiemtra(i) == true)
		{
			cnt++;
		}
	}
	cout << cnt << " ";

	return 0;
}