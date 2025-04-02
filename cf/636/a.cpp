#include <bits/stdc++.h>
#include <math.h>


void solve(int n) {
    int k = log2(n);
    int cur = 4, i = 1;
    while (i <= k) {
        if (n % (cur - 1) == 0) {
            std::cout << n / (cur - 1) << '\n';
            return;
        }
        cur *= 2;
        i += 1;
    }
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