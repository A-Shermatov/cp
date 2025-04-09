#include <bits/stdc++.h>


void solve(int n, int k, std::vector<int> a) {
    std::sort(a.begin(), a.end());
    int sum = 0;
    if (k == 0) {
        std::cout << 0;
        return ;
    }
    for (int i = n - 1; i >= 0; --i) {
        sum += a[i];
        if (sum >= k) {
            std::cout << n - i;
            return ;
        }
    }
    std::cout << -1;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);


    int k, n = 12;
    std::cin >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) 
        std::cin >> a[i];

    solve(n, k, a);
}