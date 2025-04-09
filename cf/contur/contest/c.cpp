#include <bits/stdc++.h>

void solve(int n, int m, std::vector<int>& a) {
    std::unordered_set<int> st;
    std::unordered_map<int, std::pair<int, int>> pos;

    for (int i = 0; i < n; ++i) {
        if (st.count(a[i]) == 0) {
            pos[a[i]] = std::make_pair(i + 1, i + 1);
        }
        pos[a[i]].second = i + 1;
        st.emplace(a[i]);
    }

    std::vector<std::vector<int>> poss;
    for (auto& [k, v]: pos) {
        poss.push_back({v.first, v.second, k});
    }
    std::sort(poss.begin(), poss.end());
    std::vector<std::vector<int>> ans;
    int start = 0, end = 0;
    bool ok = true;
    for (int i = 0; i < poss.size(); ++i) {
        if (poss[i][0] >= start && poss[i][0] <= end && (poss[i][1] > end || poss[i][1] < start) || poss[i][1] >= start && poss[i][1] <= end && (poss[i][0] > end || poss[i][0] < start)) {
            ok = false;
            break;
        }
        ans.push_back({poss[i][2], poss[i][0], poss[i][1]});
        start = std::max(start, poss[i][0]);
        if (start > end) {
            end = poss[i][1];
        } else {
            end = std::min(end, poss[i][1]);
        }
        
    }
    // std::cout << "OK";
    if (ok) {
        std::cout << ans.size() << std::endl;

        for (int i = 0; i < ans.size(); ++i) {
            std::cout << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2] << std::endl;
        }
    } else {
        std::cout << -1 << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    solve(n, m, a);
}