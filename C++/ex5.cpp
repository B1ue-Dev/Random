#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, n;
    cout << "Nhap ten 1: ";
    getline(cin, s);
    cout << "Nhap ten 2: ";
    getline(cin, n);

    // Vi du 1
    if (s.size() > n.size())
    {
        cout << "Ten 1 dai hon " << s.size() - n.size() << " ki tu" << endl;
        cout << "Ten 1: " << s << endl;
    } else {
        cout << "Ten 2 dai hon " << n.size() - s.size() << " ki tu" << endl;
        cout << "Ten 2: " << n << endl;
    }

    // Vi du 2
    // Ki tu dau cua s trung voi ki tu cuoi cua n
    int x = n.size();
    if (s[0] == n[x-1])
    {
        cout << "\nTrung nhau" << endl;
    } else {
        cout << "\nKhac nhau" << endl;
    }

    // Vi du 3
    // Viet nguoc lai xau s
    for (int i = s.length(); i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}
