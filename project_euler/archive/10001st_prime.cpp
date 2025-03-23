#include <bits/stdc++.h>
#include <math.h>


constexpr int C = 100000;


int main() {
    float k;
    std::cin >> k;

    long long pk = k * log(k) + C;
    
    std::vector<bool> sieve(pk + 1, true);
    sieve[0] = sieve[1] = false;
    for (long long i = 2; i <= pk; ++i) {
        if (sieve[i]) {
            if (i * i <= pk) {
                for (long long j = i * i; j <= pk; j += i) {
                    sieve[j] = false;
                }
            }
        }
    }
    int count = 0;
    long long ans = -1;
    for (int i = 2; i <= pk; ++i) {
        if (sieve[i]) {
            count++;
            ans = i;
        }
        if (count == k) {
            break;
        }
    }
    std::cout << count << "'st = " << ans;

}