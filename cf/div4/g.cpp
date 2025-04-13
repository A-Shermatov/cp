#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    deque<int64_t> a;
    int64_t sum = 0, r = 0;
    int n = 0;
    bool reversed = false;
    
    while (q--) {
        int s;
        cin >> s;
        if (s == 3) {
            int64_t k;
            cin >> k;
            if (reversed) {
                a.push_front(k); 
            } else {
                a.push_back(k); 
            }
            n++;
            sum += k;
            r += k * n;
        } else if (s == 1) {
            if (n > 1) { 
                int64_t last = reversed ? a.front() : a.back(); 
                r = r + sum - last * n;
                if (reversed) {
                    a.pop_front();
                    a.push_back(last); 
                } else {
                    a.pop_back();
                    a.push_front(last);
                }
            }
        } else if (s == 2) {
            r = (int64_t)(n + 1) * sum - r;
            reversed = !reversed; 
        }
        cout << r << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}