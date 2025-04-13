#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int k) {
    vector<vector<int>> a(n, vector<int>(m));
    int numbers_per_value = n * m / k; 
    vector<int> count(k, 0); 
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int val = (i * m + j) % k + 1;
            while (count[val - 1] >= numbers_per_value) {
                val = val % k + 1;
            }
            bool valid = true;
            if (i > 0 && a[i - 1][j] == val) valid = false;
            if (j > 0 && a[i][j - 1] == val) valid = false;
            if (!valid) {
                int original_val = val;
                do {
                    val = val % k + 1;
                    if (count[val - 1] >= numbers_per_value) continue;
                    valid = true;
                    if (i > 0 && a[i - 1][j] == val) valid = false;
                    if (j > 0 && a[i][j - 1] == val) valid = false;
                } while (!valid && val != original_val);
            }
            a[i][j] = val;
            count[val - 1]++;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        solve(n, m, k);
    }
    return 0;
}