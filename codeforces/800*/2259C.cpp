#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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
    ll n; cin>>n;
 
    vi v(n);
    for(int &i : v) cin >> i;
 
    int end = v.size()-1, front = 0;
 
    vi v2;
    for(int i=0; i<v.size(); i++){
        v2.push_back( abs(v[i]) );
        if( v[front] == v[end] && v[front] !=0 ){
            for(int j=front+1; j<= end; j++){
                if( j == end) v2.push_back( abs(v[i]) );
                else v2.push_back(0);
            }
            break;
        }
        else{
            if( front ==1 || front != end ) front++;
            if( end == 0 ) end--;
        }
    }
    for(auto &it: v2){
        cout << it << " ";
    }
    cout<<"\n";
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