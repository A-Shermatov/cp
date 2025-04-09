// to solve
#include <bits/stdc++.h>


void solve(int n, std::vector<int>& b) {
    std::sort(b.begin(), b.end());
    int k = n;
    for (int i = 0; i < n * (n - 1) / 2; i += --k)
        std::cout << b[i] << ' ';
    std::cout << "1000000000\n";
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

        std::vector<int> b(n * (n - 1) / 2);
        for (int i = 0; i < n * (n - 1) / 2; ++i)
            std::cin >> b[i];

        solve(n, b);
    }
}