// Tim cap so
// https://lqdoj.edu.vn/problem/findpair

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (a[i - 1] + a[j - 1] == X) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return cout << "No solution" << endl, 0;

}