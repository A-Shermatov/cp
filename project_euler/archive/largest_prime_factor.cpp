#include <bits/stdc++.h>
#include <math.h>


int main() {
    long long n;
    std::cin >> n;

    long long sq = sqrt(n);
    std::vector<bool> primes(sq + 1, true);

    primes[0] = primes[1] = false;
    for (long long i = 0; i < sq; ++i) {
        if (primes[i])
            if (i * i <= sq)
                for (long long j = i * i; j <= sq; j += i)
                    primes[j] = false;
    }
    for (long long i = sq; i > 0; --i)
        if (primes[i] && n % i == 0) {
            std::cout << i << '\n';
            return 0;
        }
    std::cout << -1 << '\n';
}