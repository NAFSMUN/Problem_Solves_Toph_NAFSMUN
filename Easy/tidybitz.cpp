// Questions : https://toph.co/p/tidy-bits
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        // Count the number of 1s (set bits) in n
        int m = __builtin_popcount(n);
        int result = (1 << m) - 1;
        cout << result << "\n";
    }
}
