#include <bits/stdc++.h>


void solve(int n) {
    int count3 = 0;
    while (n % 3 == 0 && n > 1) {
        count3++;
        n /= 3;
    }
    int count2 = 0;
    while (n % 2 == 0 && n > 1) {
        count2++;
        n /= 2;
    }
    std::cout <<((n > 1 || count2 > count3) ? -1: 2 * count3 - count2) << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) {
        int n;
        std::cin >> n;
        solve(n);
    }
}