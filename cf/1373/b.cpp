#include <bits/stdc++.h>


void solve(std::string s) {
    int k0 = 0, k1 = 0;

    for(char ch: s) {
        if (ch == '1')
            k1++;
        else
            k0++;
    }
    if (k0 == 0 || k1 == 0 || (std::min(k0, k1) & 1) == 0)
        std::cout << "NET\n";
    else
        std::cout << "DA\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    while (t-- > 0) {
        std::string s;
        std::cin >> s;

        solve(s);
    }
}