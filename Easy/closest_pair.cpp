// Question : https://toph.co/p/closest-pair
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
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    double min_dist = numeric_limits<double>::max();
    for (int i = 0; i < n; ++i) {
        int x1 = points[i].first, y1 = points[i].second;
        for (int j = i + 1; j < n; ++j) {
            int x2 = points[j].first, y2 = points[j].second;
            double dx = x1 - x2;
            double dy = y1 - y2;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist < min_dist) {
                min_dist = dist;
            }
        }
    }

    cout << fixed << setprecision(14) << min_dist << endl;
}

