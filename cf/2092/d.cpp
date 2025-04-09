#include <bits/stdc++.h>
// didn't solve


void solve(int n, std::string s) {
    if (n == 1) {
        std::cout << -1 << '\n';
        return;
    }
    std::unordered_map<int, int> freq;
    for (auto ch: s) {
        freq[ch]++;
    }
    int mx = std::max(freq['L'], freq['I'], freq['T']);
    freq['L'] = mx - freq['L'];
    freq['I'] = mx - freq['I'];
    freq['T'] = mx - freq['T'];
    if (freq['L'] == 0 && freq['I'] == 0 && freq['T'] == 0) {
        std::cout << 0 << '\n';
        return;
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

        std::string s;
        std::cin >> s;

        solve(n, s);
    }
}