#include <bits/stdc++.h>

void solve() {
    int k;
    std::cin >> k;
    for (int a = 1; a <= k - 2; ++a) {
        for (int b = 1; b <= k - a - 1; ++b) {
            int c = k - a - b;
            if (a == b || b == c || a == c) 
                continue;
            if (a * a + b * b == c * c) {
                std::cout << "a = " << a << "; b = " << b << "; c = " << c << "; a * b * c = " << a * b * c;
                return;
            }
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
}