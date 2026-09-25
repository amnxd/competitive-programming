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

// ll sumOne(ll n, ll k){
//     ll sum1 = 0;
//     for(ll i=1; i<=n; i++){
//         if(k<=0) break;
//         sum1 += i;
//         k--;
//     }
//     return sum1;
// }

// ll sumTwo(ll n, ll k){
//     ll sum2 =0;
//     for(ll i=n; i>=1; i--){
//         if(k<=0) break;
//         sum2 += i;
//         k--;
//     }
//     return sum2;
// }

// ll sumThree(ll n, ll k){
//     ll sum3 =0;
//     ll ptr = n;
//     for(ll i = 1; i<=n; i++){
//         if(k<=0) break;
//         sum3 += i;
//         k--;

//         if(k<=0) break;
//         sum3 += ptr;
//         ptr--;
//         k--;
//     }
//     return sum3;
// }

// ll sumFour(ll n, ll k){
//     ll sum4 = 0;
//     ll ptr = n;
//     for(ll i = 1; i<=n; i++){
//         if(k<=0) break;
//         sum4 += ptr;
//         ptr--;
//         k--;

//         if(k<=0) break;
//         sum4 += i;
//         k--;
//     }
//     return sum4;
// }

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    if (k < 1 || k > n) {
        cout << "NO\n";
        return;
    }

    ll minSum = k * (k + 1) / 2;
    ll maxSum = k * (2 * n - k + 1) / 2;

    cout << (minSum <= x && x <= maxSum ? "YES\n" : "NO\n");
}

int main() {
    setup_io();

    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}