// Question : https://toph.co/p/help-them
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

int main () {
    FastRead;

    int Q;
    if (cin >> Q) {
        while (Q--) {
            int N;
            cin >> N;

            vector<int> A(N);
            for (int i = 0; i < N; ++i) {
                cin >> A[i];
            }

            sort(all(A));


            for (int i = 1; i < N; ++i) {
                if (A[i] - A[i - 1] > 1) {
                    cout << A[i - 1] + 1 << "\n";
                    break;
                }
            }
        }
    }
}
