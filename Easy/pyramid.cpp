//Question : https://toph.co/p/full-pyramid
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n - i; ++j) {
                cout << " ";
            }
            for (int k = 1; k <= i; ++k) {
                cout << "*";
                if (k < i) {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
