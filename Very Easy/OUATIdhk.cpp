// Question : https://toph.co/p/once-upon-a-time-in-dhaka
#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    FastRead;
    int T;
    cin >> T;

    while (T--) {
        double W, G;
        cin >> W >> G;

        double result = (W - G) / 2;
        cout << fixed << setprecision(4) << result << endl;
    }

}
