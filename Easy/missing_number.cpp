// Question : https://toph.co/p/missing-number
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
    int totalSum;
    int i, j, k;

    if (!(cin >> totalSum))
        return 0;
    if (!(cin >> i >> j >> k))
    return 0;
    int missingNumber = totalSum - (i + j + k);

    cout << missingNumber;
    }




