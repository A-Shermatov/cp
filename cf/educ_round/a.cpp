#include <bits/stdc++.h>


void solve(int n) {
    std::cout << n * 2 << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) {
        int n;
        std::cin >> n;

        solve(n);
    }
}