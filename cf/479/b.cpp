#include <bits/stdc++.h>


void solve(int n, std::string s) {
    std::unordered_map<std::string, int> freq;

    for (int i = 0; i < n - 1; ++i)
        freq[s.substr(i, 2)]++;

    int mx = 0;
    std::string ans = "";
    for (auto [k, v]: freq)
        if (v > mx) {
            mx = v;
            ans = k;
        } 
    std::cout << ans;
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