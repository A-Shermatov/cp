#include <bits/stdc++.h>


void solve(std::string s) {
    int n = s.size();
    if (n < 3) {
        std::cout << s;
        return;
    }
    std::vector<std::string> ans;
    std::string cur = "";
    int i = 0;
    for (; i < n - 3; ++i) {
        bool f = (s[i] == 'W') && (s[i + 1] == 'U') && (s[i + 2] == 'B');
        if (!f) {
            cur += s[i];
        } else {
            if (!cur.empty())
                ans.emplace_back(cur);
            cur = "";
            i += 2;
        }
    }
    if (i + 3 == n) {
        bool f = (s[n - 3] == 'W') && (s[n - 2] == 'U') && (s[n - 1] == 'B');
        if (!f) {
            cur += s[n - 3];
            cur += s[n - 2];
            cur += s[n - 1];
        }
    } else {
        if (i + 2 == n) {
            cur += s[n - 2];
            cur += s[n - 1];
        } else
            cur += s[n - 1];
    }
    
    if (!cur.empty())
        ans.emplace_back(cur);

    for (std::string str: ans)
        std::cout << str << ' ';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;

    std::cin >> s;

    solve(s);
}