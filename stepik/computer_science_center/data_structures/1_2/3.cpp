#include <bits/stdc++.h>


void solve(int size, int n, std::vector<std::pair<int, int>>& a) {
    int m = 0, prev = 0;
    std::queue<int> q;
    for (int i = 0; i < n; ++i)  {
        if (m < size) {
            std::cout << std::max(a[i].first, prev) << '\n';
            prev = std::max(a[i].first, prev) + a[i].second;
            q.push(prev);
            m++;
            
        } else {
            while (q.size() > 0 && q.front() <= a[i].first) {
                m--;
                q.pop();
            }
            if (m < size) {
                std::cout << std::max(a[i].first, prev) << '\n';
                prev = std::max(a[i].first, prev) + a[i].second;
                q.push(prev);
                m++;
            } else {
                std::cout << -1 << '\n';
            }
        }
    }
}


int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int size, n;
    std::cin >> size >> n;

    std::vector<std::pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i].first >> a[i].second;

    solve(size, n, a);
}