#include <bits/stdc++.h>


void solve(int n, int m, std::vector<int>& a) {
    std::stack<std::pair<int, int>> in, out;
    int n1 = 0;
    for (int i = 0; i < n; ++i) {
        if (i < m) {
            std::pair<int, int> pr;
            pr.first = a[i];
            pr.second = in.empty() ? a[i] : std::max(a[i], in.top().second);
            in.push(pr);
            n1++;
        } else {
            if (n1 == m) {
                while (n1-- > 0) {
                    std::pair<int, int> pr;
                    pr.first = in.top().first;
                    pr.second = out.empty() ? in.top().first : std::max(out.top().second, in.top().first);
                    in.pop();
                    out.push(pr);
                }
                n1++;
            }
            std::cout << std::max(in.empty() ? 0: in.top().second, out.top().second) << ' ';
            out.pop();
            std::pair<int, int> pr;
            pr.first = a[i];
            pr.second = in.empty() ? a[i] : std::max(a[i], in.top().second);
            in.push(pr);
            n1++;
        }
    }
    std::cout << std::max(in.empty() ? 0 : in.top().second, out.empty() ? 0: out.top().second);
}


int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    int m;
    std::cin >> m;
    solve(n, m, a);
}