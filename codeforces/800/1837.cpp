#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    while(t--) {
        int x, k; cin >> x >> k;

        if( x%k != 0 ){
            cout << 1 << '\n';
            cout << x << '\n';
        }
        else{
            cout << 2 << '\n';
            cout << x-1 << " " << 1 << '\n';
        }
    }
}