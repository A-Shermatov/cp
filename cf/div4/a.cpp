#include <bits/stdc++.h>


void solve(std::string s1, std::string s2, std::string s3) {
    std::string ans = "";
    ans += s1[0];
    ans += s2[0];
    ans += s3[0];
    std::cout << ans << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        std::string s1, s2, s3;
        std::cin >> s1 >> s2 >> s3;
        solve(s1, s2, s3);
    }
}