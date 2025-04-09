#include <bits/stdc++.h>


void solve(int n, std::vector<int64_t>& a) {
    int64_t mn = a[0];
    for (int i = 1; i < n; ++i) {
        mn = std::min(mn, a[i]);
    }
    int count_min = 0;
    std::vector<int64_t> mults;
    for (int i = 0; i < n; ++i) {
        if (a[i] == mn)
            count_min++;
        else if (a[i] % mn == 0)
            mults.push_back(a[i]);

    }
    if (count_min > 1) {
        std::cout << "YES\n";
        return;
    }
    auto gcd = [&] (int64_t x, int64_t y) {
        while (y > 0) {
            x %= y;
            std::swap(x, y);
        }
        return x;
    };
    if (count_min == 1 && mults.size() > 1) {
        int64_t g = mults[0];
        for (int i = 1; i < mults.size(); ++i) {
            g = gcd(g, mults[i]);
        }
        if (g == mn) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
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

        std::vector<int64_t> a(n);

        for (int i = 0; i < n; ++i)
            std::cin >> a[i];

        solve(n, a);
    }
}