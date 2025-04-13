#include <bits/stdc++.h>


void solve(int n, std::vector<int>& a) {
    int64_t mx = INT64_MIN;
    std::vector<int> cnt(30, 0);
    for (int mask = 0; mask < 30; ++mask) {
        for (int i = 0; i < n; ++i)
            if ((a[i] >> mask) % 2 == 1)
                cnt[mask]++;
    }
    for (int k = 0; k < n; ++k) {
        int64_t sm = 0;
        for (int mask = 0; mask < 30; ++mask) {
            if ((a[k] >> mask) % 2 == 1)
                sm += (1LL << mask) * (n - cnt[mask]);
            else
                sm += (1LL << mask) * cnt[mask];
        }
        mx = std::max(mx, sm);
    }
    std::cout << mx << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) 
            std::cin >> a[i];
        solve(n, a);
    }
}