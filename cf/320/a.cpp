#include <bits/stdc++.h>


void solve(std::string n) {
    int k = n.size();
    for (int i = 0; i < k;) {
        if (i < k - 2) {
            std::string s = n.substr(i, 3);
            if (s == "144") {
                i += 3;
                continue;
            }
        }
        if (i < k - 1) {
            std::string s = n.substr(i, 2);
            if (s == "14") {
                i += 2;
                continue;
            }
        }
        if (n[i] == '1') {
            i++;
        } else {
            std::cout << "NO";
            return ;
        }
    }
    std::cout << "YES";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string n;
    std::cin >> n;

    solve(n);
}