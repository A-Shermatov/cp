#include <bits/stdc++.h>


void solve(int x, int k) {
    bool is_prime = true;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (x <= 1) is_prime = false;
    if (k == 1 && is_prime || k == 2 && x == 1)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        int x, k;
        std::cin >> x >> k;
        solve(x, k);
    }
}