#include <bits/stdc++.h>
using namespace std;

// Count astrericks in a string

int main() {
    string s = "l|*e*et|c**o|*de|";

    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '*') {
            count++;
        }
    }
    cout << count;
}