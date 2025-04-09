#include <bits/stdc++.h>
// wa


void solve(int64_t n) {
    int64_t count = 0;

    for (int64_t i = 2; i <= n; i *= 2) {
        int64_t div = 1LL * sqrt(n / i);
        count += (div + 1) / 2;
    }
    std::cout << count;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int64_t n;
    std::cin >> n;

    solve(n);

}