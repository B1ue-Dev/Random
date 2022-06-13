#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    string s = to_string(x);
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    if (isPalindrome(x) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
}