#include <bits/stdc++.h>


void solve(int n, std::vector<std::string>& a) {
    bool f = false;
    int cnt = 0;
    for (auto& s: a) {
        if (s == "private" && !f) {
            cnt++;
        } else if (s == "login") {
            f = true;
        } else if (s == "logout") {
            f = false;
        }
    }
    std::cout << cnt;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<std::string> a(n);
    for (int i = 0; i < n; ++i) 
        std::cin >> a[i];
    solve(n, a);
}