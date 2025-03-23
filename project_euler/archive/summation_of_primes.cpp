#include <bits/stdc++.h>


void solve() {
    int64_t n;
    std::cin >> n;

    std::vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int64_t i = 2; i <= n; ++i)
        if (sieve[i])
            if (i * i <= n)
                for (int64_t j = i * i; j <= n; j += i)
                    sieve[j] = false;
    int64_t sum = 0;
    for (int i = 2; i <= n; ++i) {
        if (sieve[i])
            sum += i;
    }
    std::cout << sum;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
}