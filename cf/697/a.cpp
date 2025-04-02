#include <bits/stdc++.h>


void solve(int64_t n) {
    while ((n & 1) == 0)
        n /= 2;
    std::cout << ((n > 1) ? "YES\n": "NO\n");
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) {
        int64_t n;
        std::cin >> n;
        solve(n);
    }
}