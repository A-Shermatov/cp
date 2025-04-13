#include <bits/stdc++.h>

const int MOD = 1e9;


void solve(int n, int k) {
    if (k > n) {
        std::cout << 1;
        return;
    }
    std::vector<int64_t> a(n + 1, 1), pref(n + 1);
    pref[0] = 1;
    
    for (int i = 1; i < k; ++i)
        pref[i] = (pref[i - 1] + a[i]);

    for (int i = k; i <= n; ++i) {
        a[i] = (pref[i - 1] - ((i - k - 1) < 0? 0: pref[i - k - 1])) % MOD;
        pref[i] = (pref[i - 1] + a[i]) % MOD;
    }
    std::cout << a[n];
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n, k;
    std::cin >> n >> k;
    solve(n, k);
}