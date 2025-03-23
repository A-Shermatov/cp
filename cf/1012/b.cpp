#include <bits/stdc++.h>


void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> matrix(n);
    for (int i = 0; i < n; ++i) 
        std::cin >> matrix[i];
    std::vector<std::vector<bool>> state(n);
    for (int i = 0; i < n; ++i) {
        std::vector<bool> row(m, true);
        state[i] = row;
    }
        
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool row = true;
            for (int k = i - 1; k >= 0; --k) {
                row = row & (matrix[k][j] == '1');
            }
                
            
            bool column = true;
            for (int k = j - 1; k >= 0; --k)
                column = column & (matrix[i][k] == '1');

            if ((matrix[i][j] == '1') && !(row || column)) {
                std::cout << "NO\n";
                return;
            }
        }
    }
    std::cout << "YES\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t-- > 0) {
        solve();
    }
}