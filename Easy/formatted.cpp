//Question : https://toph.co/p/formatted-numbers
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;

string s = to_string(n);

for(int i = s.length()- 3; i > 0 ; i -=3){
    s.insert(i, ",");
}
cout << s;
}
