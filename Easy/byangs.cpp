// Question : https://toph.co/p/byang-learns-to-add-almost
#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

int main() {
    FastRead;
    int n, m;
    if (cin >> n >> m) {
        bool will_carry = false;

        while (n > 0 && m > 0) {
            if ((n % 10) + (m % 10) > 9) {
                will_carry = true;
                break;
            }
            n = n / 10;
            m = m / 10;
        }

        if (will_carry) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
