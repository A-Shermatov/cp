#include <bits/stdc++.h>


void solve(int n, int m, int l, int r) {
    int ll = 0, rr = 0;
    while (m-- > 0) {
        if (ll == l) {
            rr++;
        } else if (rr == r) {
            ll--;
        } else {
            if (m % 2 == 1) {
                ll--;
            } else {
                rr++;
            }
        }
    }
    std::cout << ll << ' ' << rr << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        int n, m, l, r;
        std::cin >> n >> m >> l >> r;
        solve(n, m, l, r);
    }
}