#include <bits/stdc++.h>


void solve(int n, int a, int b) {
    std::string ans = "";
    int ch = 0;
    while (n-- > 0) {
        ans += 'a' + ch;
        if (ch + 1 == b) {
            ch = -1;
        }
        ch++;
    }
    std::cout << ans << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    while (t-- > 0) {
        int n, a, b;

        std::cin >> n >> a >> b;

        solve(n, a, b);
    }
}