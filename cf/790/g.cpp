#include <bits/stdc++.h>


void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> tree(n + 2);
    for (int i = 2; i <= n; ++i) {
        int v;
        std::cin >> v;
        tree[v].push_back(i);
    }
        
    std::string s;
    std::cin >> s;

    int result = 0;
    auto dp = [&result, &s, &tree] (auto&& self, int v) -> int {
        int balance = (s[v - 1] == 'B') ? 1: -1;
        if (tree[v].empty()) return balance;
        for (auto child: tree[v])
            balance += self(self, child);
        if (balance == 0) result++;
        return balance;
    };
    
    dp(dp, 1);
    std::cout << result << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) 
        solve();
}