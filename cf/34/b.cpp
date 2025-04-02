#include <bits/stdc++.h>


void solve(int n, int m, std::vector<int> a) {
    std::sort(a.begin(), a.end());
    int tot = 0;
    for (int i = 0; i < m; ++i) {
        if (a[i] >= 0)
            break;
        tot -= a[i];
    }
    std::cout << tot;
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

    solve(n, m, a);
}