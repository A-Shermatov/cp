#include <bits/stdc++.h>


void solve(int n) {
    if (n % 2 == 0) {
        std::cout << -1 << '\n';
        return;
    }
    std::cout << n << ' ' << 1;
    for (int i = 2; i < n; ++i)
        std::cout << ' ' << i;
    std::cout << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        int n;
        std::cin >> n;
        solve(n);
    }
}