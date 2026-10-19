#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi  = vector<int>;
using vll = vector<ll>;

#define all(c)   (c).begin(), (c).end()
#define rall(c)  (c).rbegin(), (c).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define mp       make_pair
#define F        first
#define S        second

const int MOD = 1e9 + 7; // 998244353
const int INF = 1e9 + 7;
const ll LLINF = 1e18 + 7;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin >> n;
    vi v(n-1);
    for(int &i: v) cin >> i;

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(v[0]!=1){
            cout << 1;
            break;
        }
        if(v[i]+1 != v[i+1]){
            cout << v[i] + 1 <<'\n';
            break;
        }
    }
}

int main() {
    setup_io();

    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}