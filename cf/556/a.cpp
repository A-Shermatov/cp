#include <bits/stdc++.h>

void solve(int n, std::string s) {
    int k0 = 0, k1 = 0;

    for (char ch: s) {
        if (ch == '1')
            k1++;
        else
            k0++;
    }
    std::cout << std::abs(k1 - k0);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    solve(n, s);
}