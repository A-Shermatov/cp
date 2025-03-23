#include <bits/stdc++.h>

// solved

int main() {
    std::string s;
    std::cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1])
            cnt++;
    }
    if ((cnt + s.size()) & 1 == 1)
        std::cout << cnt + 1 << '\n';
    else {
        if (s[0] == 'o')
            std::cout << cnt + 2 << '\n';
        else
            std::cout << cnt << '\n';
    }
}