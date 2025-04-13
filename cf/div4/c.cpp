#include <bits/stdc++.h>


void solve(int n, auto& g) {
    std::vector<bool> used(2 * n + 1, true);
    std::vector<int> p(2 * n, -1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            p[i + j - 1] = g[i - 1][j - 1];
            used[g[i - 1][j - 1]] = false;
        }
    }
    int j = 1;
    for (int i = 0; i < 2 * n; ++i) {
        if (p[i] != -1)  continue;
        while (!used[j] && j < 2 * n) {
            j++;
        }
        p[i] = j;
    }
    for (int i = 0; i < 2 * n; ++i) {
        std::cout << p[i] << ' ';
    }
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
        std::vector<std::vector<int>> g(n);
        for (int i = 0; i < n; ++i) {
            std::vector<int> row(n);
            for (int j = 0; j < n; ++j)
                std::cin >> row[j];
            g[i] = row;
        }
        solve(n, g);
    }
}