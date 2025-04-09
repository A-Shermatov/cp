#include <bits/stdc++.h>


void solve(int n, std::vector<int>& a, std::vector<int>& b) {
    std::vector<std::pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++) {
        pairs[i] = {a[i], b[i]};
    }

    std::vector<int> a_curr = a, b_curr = b;
    std::vector<std::pair<int, int>> ops;
    std::vector<int> pos_a(n + 1);
    for (int i = 0; i < n; i++) pos_a[a[i]] = i;

    for (int i = 0; i < n; i++) {
        if (a_curr[i] != b_curr[n - 1 - i]) {
            int j = pos_a[b_curr[n - 1 - i]];
            if (i != j) {
                ops.push_back({i + 1, j + 1});
                std::swap(a_curr[i], a_curr[j]);
                std::swap(b_curr[i], b_curr[j]);
                pos_a[a_curr[i]] = i;
                pos_a[a_curr[j]] = j;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a_curr[i] != b_curr[n - 1 - i]) {
            std::cout << "-1\n";
            return;
        }
    }

    
    std::cout << ops.size() << '\n';
    for (auto [i, j] : ops) {
        std::cout << i << " " << j << '\n';
    }
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

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
            std::cin >> a[i];

        std::vector<int> b(n);
        for (int i = 0; i < n; ++i)
            std::cin >> b[i];
        solve(n, a, b);
    }
}