#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    int a[n];
    cout << "Nhap du lieu: " << endl;
    for (int i=1; i<=n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "\nXuat mang: " << endl;
    for (int i=1; i<=n; i++)
        cout << a[i] << " ";
    int S = 0;
    for (int i=1; i<=n; i++)
        S += a[i];
    cout << "Tong la: " << S << endl;

    int max = 0;
    for (int i=1; i<=n; i++)
        if (a[i] > max)
            max = a[i];
    cout << endl;
    cout << "Gia tri lon nhat la: " << max << endl;

    int min = INT_MAX;
    for (int i = 1; i<=n; i++)
        if (a[i] < min)
            min = a[i];
    cout << endl;
    cout << "Gia tri nho nhat la: " << min << endl;

    int am = 0, duong = 0, ko = 0;

    return 0;
}
