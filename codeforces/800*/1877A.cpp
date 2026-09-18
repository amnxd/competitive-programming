#include<bits/stdc++.h>

int main(){
    int t; std::cin>> t;
    while ( t-- ){
        int n; std::cin >> n;

        std::vector<int> v(n-1);
        for( int &i: v){
            std::cin >> i;
        }

        int x = 0;
        for(int i:v) x+=i;
        std::cout << 0 - x << '\n';
    }
}
