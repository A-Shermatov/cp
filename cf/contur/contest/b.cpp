#include <bits/stdc++.h>


void solve(int n, int m, std::vector<int>& a, std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    auto ok = [&] (int x) {
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (std::abs(a[i] - b[j]) > x) {
                j++;
            } else {
                i++;
            }
        }
        return i == n;
    };

    int lo = -1, hi = 1'000'000'000;
    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;
        if (ok(mid))
            hi = mid;
        else
            lo = mid;
    }
    std::cout << hi;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    std::vector<int> b(m);
    for (int i = 0; i < m; ++i)
        std::cin >> b[i];

    solve(n, m, a, b);
}