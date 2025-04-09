#include <bits/stdc++.h>


void solve(int n, int m) {
    int ans = n, count = 0, cur = ans / m;
    while (cur > count) {
        ans += cur - count;
        count = cur;
        cur = ans / m;
    }
    std::cout << ans;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    solve(n, m);
}