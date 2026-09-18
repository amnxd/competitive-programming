#include <bits/stdc++.h>
#pragma GCC optimize ("O3")

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int t;
    std::cin >> t;

    while(t--) {
        long long n;
        std::cin >> n;

        long long dif = INT_MAX, mindif = INT_MAX;

        std::vector<long long> v(n);

        for(int i=0; i<n; i++){
            std::cin >> v[i];
            if(i>0) dif = v[i] - v[i-1];
            mindif = std::min(dif, mindif);
        }

        if(mindif < 0){
            std::cout << 0 << '\n';
        }
        else{
                std::cout << (mindif/2) + 1 << '\n';
        }
    }
}