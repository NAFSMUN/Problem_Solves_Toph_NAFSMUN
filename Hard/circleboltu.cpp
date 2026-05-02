// Question : https://toph.co/p/circle-of-boltu
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

    int T;

    if (!(cin >> T)) return 0;


    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;


        vector<LL> X(N);
        vector<LL> Y(N);

        for (int i = 0; i < N; i++) {
            cin >> X[i] >> Y[i];
        }

        LL max_dist_sq = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {


                LL dx = X[i] - X[j];
                LL dy = Y[i] - Y[j];

                // Calculate the squared distance: d^2 = dx^2 + dy^2
                LL dist_sq = (dx * dx) + (dy * dy);


                if (dist_sq > max_dist_sq) {
                    max_dist_sq = dist_sq;
                }
            }
        }


        cout << "Case " << t << ": " << max_dist_sq << "\n";
    }


}
