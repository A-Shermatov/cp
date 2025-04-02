#include <bits/stdc++.h>


void solve(int n, std::vector<int> a) {
    int mx = 0, left = 0, right = 1;
    while (right < n) {
        if (a[right] < a[right - 1]) {
            mx = std::max(mx, right - left);
            left = right;
        }
        right++;
    }
    mx = std::max(mx, right - left);
    std::cout << mx;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    solve(n, a);
}