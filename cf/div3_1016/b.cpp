#include <bits/stdc++.h>


void solve(std::string& s) {
    int count = 0, n = s.size();
    bool f = false;
    for (int i = n - 1; i >= 0; --i) {
        // std::cout << "f = " << f << "; count = " <<  count << '\n';
        if (f) {
            if (s[i] - '0' > 0)
                count++;
        } else {
            if (s[i] - '0' == 0)
                count++;
            else
                f = true;
        }
    }
    std::cout << count << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        std::string s;
        std::cin >> s;
        solve(s);
    }
}