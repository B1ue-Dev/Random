#include <iostream>
using namespace std;

// Tìm ước số chung nhỏ nhất

int main()
{
    int n = readInt();
    int d = readInt();
    while (--n) d = gcd(d, readInt());

    if (d == 1)     return cout << -1, 0;
    if (d % 2 == 0) return cout << 2, 0;
    for (int i = 3; i <= d; i += 2)
        if (d % i == 0)
            return cout << i, 0;

    return 0;
}
