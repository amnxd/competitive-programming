#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int &i: a) std::cin >> i;

        std::vector<int> b;
        std::vector<int> c;

        std::sort(a.begin(), a.end());

        int len = a.size();

        for(int i=0; i<len; i++){
            if( i==0 ){
                b.push_back(a[i]);
                continue;
            }
            if(a[i] == b.back()) b.push_back(a[i]);
            else c.push_back(a[i]);
        }

        if( b.size()==0 || c.size() == 0){
            std::cout << -1 << '\n';
        }
        else{
            std::cout << b.size() << " " << c.size() << "\n";
            for(auto i:b) std::cout << i << " ";
            std::cout << '\n';
            for(auto t:c) std::cout << t << " ";
            std::cout << '\n';
        }

    }
}