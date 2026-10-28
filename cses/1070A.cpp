#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
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
    int n; cin>> n;
    int temp = n;

    if(n<4){
        if(n==1){
            cout << 1;
        }
        else{
            cout << "NO SOLUTION";
        }
    }
    else if(n==4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else{
       for(int i=0; i < temp; i++){
            if(n<=0){
                n = temp - 1;
            }
            cout << n << " ";
            n -= 2;
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