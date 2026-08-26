#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef long double ld;

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
    string s1,s2; cin>>s1;
    int one=0, two=0, three=0, plus=0;
    if(s1.length()==1) cout<<s1<<"\n";
    else{
        for(auto &it:s1){
            if(it=='1') one++;
            else if(it=='2') two++;
            else if(it=='3') three++;
            else plus++;
        }
        if(one>0 || two>0 || three>0){
            if(one>0) s2.append("1+");
            else if(two>0) s2.append("2+");
            else if(three>0) s2.append("3+");
            else s2.append("3\n");
            one--; two--; three--;
        }
        cout<<s2<<"\n";
    }
}

int main() {
    fastIO();
    ll t = 1;
    //cin >> t;
    while (t--) {
        func();
    }
    return 0;
}