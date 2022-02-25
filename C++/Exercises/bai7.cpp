#include <bits/stdc++.h>
using namespace std;


/*
Cho số nguyên dương N (N≤2∗109).
Yêu cầu: Đếm số lượng ước số của N và tổng các ước số của N.

Dữ liệu vào:
Số nguyên dương N

Kết quả:
Chứa hai số nguyên là sô lượng ước số và tổng các ước của N

Ví dụ:
Input: 10
Output: 4 18
Giải thích: Số 10 có ước là 1 2 5 10 và tổng 1 + 2 + 5 + 10 = 18
*/


int main()
{
	int N, tt = 0, sl = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			tt += i;
			sl++;
		}
	}
	cout << sl << " " << tt;

	return 0;
}