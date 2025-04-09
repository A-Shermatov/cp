#include <bits/stdc++.h>


void solve(int n, int k, std::vector<int> a) {
    std::sort(a.begin(), a.end());
    int left = 0, right = 1, mx = 0;
    while (right < n) {
        if (a[right] - a[right - 1] > k) {
            mx = std::max(mx, right - left);
            left = right;
        }
        right++;
    }
    std::cout << n - std::max(mx, right - left) << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
            std::cin >> a[i];
        
        solve(n, k, a);
    }
}