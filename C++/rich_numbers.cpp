#include <bits/stdc++.h>
using namespace std;


/*
In arithmetic, rich numbers are numbers whose sum of divisors (excluding itself) is greater than the number.
For example, the number 12 has the sum of the divisors (excluding 12) of 1+2+3+4+6 = 16 > 12. Therefore, 12 is an abundant number.
Programmatically count how many abundant numbers are in the range [L, R].
Input data: Includes 2 integers L, R (1 ≤ L ≤ R ≤ 105).
Output: Includes a single integer that is the rich number in the [L, R] segment.
*/


bool kiemtra(int j) // cho j = 12
{
	int dem = 0; // cho dem = 0
	for (int i = 1; i < j; i++) { // loop tu i = 1 den j va i tang them 1 gia tri
		if (j % i == 0) { // neu j chia het cho i
			dem += i; // dem = dem + i
		} // tiep tuc lap lai cho den khi khong thua if va for
	}

	if (dem>j) { // gia tri dem neu nho hon j
		return true; // return true, tuc la so phong phu
	} else {
		return false; // return false, neu khong phai so ph
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
			// cout << i << " "; // In ra cac so phong phu
			cnt++;
		}
	}
	cout << cnt << " ";

	return 0;
}
