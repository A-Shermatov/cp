#include <bits/stdc++.h>


void solve(int n) {
    int count = n / 2020;
    if (n - count * 2020 > count)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
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