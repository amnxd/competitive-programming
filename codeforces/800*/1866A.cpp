#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> v(n);
        for(int &i: v){
            std::cin >> i;
        }

        int mn = INT_MAX;
        for(int &i: v){
            mn = std::min( abs(i), mn );
        }
        std::cout << mn << "\n";

    }
}