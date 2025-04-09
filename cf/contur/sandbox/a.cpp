#include <bits/stdc++.h>


void solve(int n, std::vector<std::string> a) {
    
    int count = 0;
    std::string ans = "";
    for (int i = 0; i < n; ++i) {
        std::vector<bool> freq(26, false);
        int cur = 0;
        for (auto ch: a[i]) {
            if (!freq[ch - 'a'])
                cur++;
            freq[ch - 'a'] = true;
        }
        if (cur > count) {
            count = cur;
            ans = a[i];
        }
    }
    std::cout << count << ' ' << ans;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::cin >> n;

    std::vector<std::string> a(n);
    for(int i = 0; i < n; ++i)
        std::cin >> a[i];

    solve(n, a);
}