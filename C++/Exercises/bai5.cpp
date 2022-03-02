#include <bits/stdc++.h>
using namespace std;


/*
Ký hiệu D(n) là số lượng ước số của số tự nhiên n, ví dụ: D(10)=4 và D(12)=6. Với L và R cho trước (L≤R), hãy tính tổng D(L)+D(L+1)+...+D(R−1)+D(R).

Input
Dòng đầu chứa số nguyên dương T≤106 là số lượng câu hỏi.
T dòng sau, mỗi dòng chứa hai số nguyên dương L và R thể hiện một câu hỏi (1≤L≤R≤106).

Output
Gồm T dòng, mỗi dòng chứa một số nguyên dương là câu trả lời cho câu hỏi tương ứng.

Ví dụ
Input:
2
1 12
4 5

Output:
35
5
*/



int main()
{
    int t;
	cin>>t;
	for (int d=1;d<=t;d++) {
        int a, b, dem = 0;
        cin >>a>>b;
        for (int i = a; i <= b; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    dem++;
                }
            }
        }
    cout << dem << endl;
    }

	return 0;
}