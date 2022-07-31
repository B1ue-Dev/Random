#include <iostream>
using namespace std;

/*
Viết chương trình nhập vào số nguyên n (n≤109). In ra số lượng ước số của n. (Ước số của n là các số nguyên mà n chia hết)
Ví dụ: n=10 thì 4 ước số: 1 2 5 10

Dữ liệu vào
Một số nguyên dương n.

Kết quả
In ra số lượng ước số của n.

Sample Input 1: 10
Sample Output 1: 4
*/

int main()
{
	int N, cnt = 0;
	cin >> N;

	for (int i = 1; i <= N/2; i++) {
		if (N % i == 0) {
			cnt++;
		}
	}
	
	cout << cnt+1;

	return 0;
}
