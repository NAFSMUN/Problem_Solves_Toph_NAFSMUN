// Question : https://toph.co/p/plant-tree-save-life
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


const int MAX_STUDENTS = 100005;
vector<int> adj[MAX_STUDENTS];
LL cost[MAX_STUDENTS];
bool visited[MAX_STUDENTS];

LL current_min;


void dfs(int node) {
    visited[node] = true;


    if (cost[node] < current_min) {
        current_min = cost[node];
    }


    for (int i = 0; i < adj[node].size(); i++) {
        int friend_node = adj[node][i];
        if (!visited[friend_node]) {
            dfs(friend_node);
        }
    }
}

int main () {
    FastRead;

    int n, k;
    if (!(cin >> n >> k)) return 0;


    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }


    for (int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    LL total_ice_creams = 0;


    for (int i = 1; i <= n; i++) {

        if (!visited[i]) {
            current_min = INF;


            dfs(i);


            total_ice_creams += current_min;
        }
    }

    cout << total_ice_creams << "\n";

}
