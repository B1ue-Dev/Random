#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m;
    for (int i = 1; i <= min(n,m); i++) {
        if (n % i == 0 && m % i == 0)
            a = i;
    }
    cout << a;
}
