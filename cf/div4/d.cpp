#include <bits/stdc++.h>


void solve(std::string p, std::string s) {
    int n = p.size(), m = s.size();
    bool f = true, pf = p[0] == 'l', sf = s[0] == 'l';
    int i = 0, j = 0, pl = 0, pr = 0, sl = 0, sr = 0;
    while (i < n && j < m) {
        if (pf != sf) {
            f = false;
            break;
        }
        if (pf) {
            while (i < n && p[i] != 'R') {
                pl++;
                i++;
            }
        } else {
            while (i < n && p[i] != 'L') {
                pr++;
                i++;
            }
        }
        pf ^= 1;
        if (sf) {
            while (j < m && s[j] != 'R') {
                sl++;
                j++;
            }
        } else {
            while (j < m && s[j] != 'L') {
                sr++;
                j++;
            }
        }
        sf ^= 1;
        if (pl > sl || pr > sr || 2 * pl < sl || 2 * pr < sr) {
            f = false;
            break;
        }
        pl = pr = 0;
        sl = sr = 0;
    }
    if (!f) {
        std::cout << "NO\n";
    } else if (i != n || j != m) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;

    while(t-- > 0) {
        std::string p, s;
        std::cin >> p >> s;
        solve(p, s);
    }
}