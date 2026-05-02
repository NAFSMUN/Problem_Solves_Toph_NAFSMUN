// Question : https://toph.co/p/i-did-not-do-the-assignment
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

bool isPrime = (n > 1);
for (int i = 2; i * i <= n; i++){
if (n % i == 0){
isPrime = false;
break;
}
}
if (!isPrime){
for (int j = 0 ; j < n ; j++){
  cout << "I DID NOT DO THE ASSIGNMENT.\n";

}
} else{
    cout << "NO PUNISHMENT\n";
}
}
