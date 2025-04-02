#include <bits/stdc++.h>


void solve(int n) {
    std::cout << ((n < 0) ? n / 100 * 10 - std::min(std::abs(n) % 10, std::abs(n / 10) % 10): n);
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    solve(n);
}