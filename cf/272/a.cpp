#include <bits/stdc++.h>


void solve(char d, std::string s) {
    const std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    std::string ans = "";
    for (auto ch: s)
        for (int i = 0; i < 30; ++i)
            if (ch == keyboard[i]) {
                ans += keyboard[i + ((d == 'L') ? 1: -1)];
                break;
            }
    std::cout << ans;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char direction;
    std::cin >> direction;

    std::string s;
    std::cin >> s;

    solve(direction, s);
}