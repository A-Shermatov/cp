    #include <bits/stdc++.h>


    void solve(int n, int m) {
        if (n == 1) {
            std::cout << m + 1;
            return;
        }
        int64_t power = 1;
        while (m >= 0 && (power * n - 1) / (n - 1) <= 1000000000) {
            power *= n;
            m--;
        }
        if (m >= 0) {
            std::cout << "inf";
        } else {
            std::cout << (power - 1) / (n - 1);
        }

    }


    int main() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        int t;
        //std::cin >> t;

        int n, m;
        std::cin >> n >> m;

        solve(n, m);
    }