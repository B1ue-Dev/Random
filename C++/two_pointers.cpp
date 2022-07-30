#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {1, 2, 4, 8, 10};

    vector<int> v1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; i < 5; i++) {
            if (a[i] > b[j]) {
                v1.push_back(b[j]);
            } else if (a[i] < b[j]) {
                v1.push_back(a[i]);
            }
        }
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }


}