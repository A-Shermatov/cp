#include <bits/stdc++.h>


void solve(int n, int m, std::vector<int> a) {
    sort(a.begin(), a.end());
    int left = 0, right = n - 1;
    int mn = a[m - 1];
    while (right < m)
        mn = std::min(mn, a[right++] - a[left++]);
    std::cout << mn;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;

    std::cin >> n >> m;

    std::vector<int> a(m);

    for(int i = 0; i < m; ++i)
        std::cin >> a[i];

    solve(n, m, a);
}