// Question : https://toph.co/p/if-else-eathttps://toph.co/p/if-else-eat

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
int R, C;


    if (cin >> R >> C) {

        if (R > 2000) {
            if (C == 0) {
                cout << "Compiler Water";
            } else if (C > 1000) {
                cout << "Quantum Pizza";
            } else {
                cout << "Neural Noodles";
            }
        }

        else {
            if (C == 0) {
                cout << "Null Soup";
            } else if (C > 1000) {
                cout << "Buggey Burger";
            } else {
                cout << "Logic Lemonade";
            }
        }
    }

    return 0;
}
