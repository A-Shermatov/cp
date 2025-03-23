#include <bits/stdc++.h>


void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::string rs = s;
    std::reverse(rs.begin(), rs.end());
    if (k == 0) {
        if (s < rs)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    else {
        if (s == std::string(n, s[0]))
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
}


int main() {
    int t;
    std::cin >> t;
    while (t-- > 0) {
        solve();
    }
}