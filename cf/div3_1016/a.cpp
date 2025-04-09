#include <bits/stdc++.h>


void solve(int k) {
    std::cout << ((k % 2 == 0) ? "NO\n": "YES\n");
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        int k;
        std::cin >> k;
        solve(k);
    }
}