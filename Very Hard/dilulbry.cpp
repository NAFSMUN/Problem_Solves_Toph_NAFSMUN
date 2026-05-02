// Question : https://toph.co/p/dilus-library
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

void solve() {
    LL A, B;
    cin >> A >> B;


    LL int_part = A / B;
    LL rem = A % B;

    vector<int> dec;
    bool exact = false;


    for (int i = 0; i < 101; ++i) {
        if (rem == 0) {
            exact = true;
            break;
        }
        rem *= 10;
        dec.push_back(rem / B);
        rem %= B;
    }


    if (!exact && dec.size() == 101) {

        int carry = (dec[100] >= 5) ? 1 : 0;
        dec.pop_back();


        for (int i = 99; i >= 0; --i) {
            dec[i] += carry;
            carry = dec[i] / 10;
            dec[i] %= 10;
        }


        int_part += carry;
    }


    while (!dec.empty() && dec.back() == 0) {
        dec.pop_back();
    }


    cout << int_part;
    if (!dec.empty()) {
        cout << ".";
        for (int d : dec) {
            cout << d;
        }
    }
    cout << "\n";
}

int main () {
    FastRead;

    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }

    return 0;
}
