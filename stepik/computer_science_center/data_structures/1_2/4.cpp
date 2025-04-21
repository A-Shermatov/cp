#include <bits/stdc++.h>


void solve() {
    int n;
    std::cin >> n;
    std::stack<std::pair<int, int>> stck;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        if (s == "push") {
            int x;
            std::cin >> x;
            std::pair<int, int> pr;
            pr.first = x;
            pr.second = stck.empty() ? x: std::max(stck.top().second, x);
            stck.push(pr);
        } else if (s == "pop") {
            stck.pop();
        } else {
            std::cout << stck.top().second << '\n';
        }
    }
}


int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
}