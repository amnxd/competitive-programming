#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;
        std::unordered_map<int,int> mp;

        std::vector<int> v(n);
        for(int &i: v){
            std::cin >> i;
            mp[i]++;
        }

        if (mp.size() <= 2) {
            if (mp.size() == 1) std::cout << "YES\n";
            else std::cout << (abs(mp.begin()->second - next(mp.begin())->second) <= 1 ? "YES\n" : "NO\n");
        } 
        else {
            std::cout << "NO\n";
        }
    }

}