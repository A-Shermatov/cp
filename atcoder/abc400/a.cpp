#include <bits/stdc++.h>


void solve(int a) {
    std::cout << ((400 % a == 0) ? 400 / a: -1);
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    //std::cin >> t;

    int a;
    std::cin >> a;
    solve(a);
    
}