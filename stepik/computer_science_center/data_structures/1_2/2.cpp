#include <bits/stdc++.h>


void solve(int n, std::vector<int> a) {
    std::unordered_map<int, std::vector<int>> tree;
    int root = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != -1)
            tree[a[i]].push_back(i);
        else
            root = i;
    }
    auto height = [&] (auto&& self, int val) -> int {
        int h = 1;
        for (auto ch: tree[val])
            h = std::max(h, self(self, ch) + 1);
        return h;
    };
    int h = height(height, root);
    std::cout << h;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    solve(n, a);
}