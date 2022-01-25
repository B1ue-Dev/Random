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
    return 0;
}
