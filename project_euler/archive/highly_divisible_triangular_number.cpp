#include <bits/stdc++.h>


std::vector<int> sieve() {
    std::vector<bool> primes_sieve(1000001, true);
    std::vector<int> primes;

    primes_sieve[0] = primes_sieve[1] = false;

    for (int64_t i = 2; i < 1000001; ++i) {
        if (primes_sieve[i]) {
            primes.emplace_back(i);
            if (i * i < 1000001)
                for (int64_t j = i * i; j < 1000001; j += i)
                    primes_sieve[j] = false;
        }
    }
    return primes;
}


void solve(int k) {
    int64_t sum = 1;
    std::vector<int> primes = sieve();
    int inc = 2;
    int count = 1;
    while (count < k) {
        sum += inc++;
        int64_t cur = sum;
        
        int i = 0;
        std::unordered_map<int, int> divisors;
        while (cur > 1) {
            if (cur % primes[i] == 0) {
                divisors[primes[i]]++;
                cur /= primes[i];
            }
            else
                i++;
        }

        count = 1;
        for (auto [k, v]: divisors) {
            count *= (v + 1);
        }
    }
    std::cout << "Number: " << sum;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int k;
    std::cin >> k;

    solve(k);
}