#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef long double ld;
typedef unordered_set<int> us;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define endl "\n"
const int MOD = 998244353, mod = 1e9 + 7, maxA = 1e5 + 5;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
#endif
}

void func() {
    string s; cin>>s;
    us uss;
    for(auto &c:s){
        uss.insert(c);
    }
    if(uss.size()%2==0) cout<<"CHAT WITH HER!"<<"\n";
    else cout<<"IGNORE HIM!"<<"\n";
}

int main() {
    fastIO();
    ll t = 1;
    //cin >> t;
    while (t--) {
        func();
    }
    time;
    return 0;
}