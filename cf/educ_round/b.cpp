#include <bits/stdc++.h>

int64_t fast(int n, int k, int64_t x, std::vector<int>& a) {
    std::vector<int64_t> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + a[i];
    }
   
    int lo = 0, hi = k;
    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;
        if (mid * prefix[n] < x) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    
    int64_t count = (k - hi) * 1LL * n;

    int64_t sum = (hi - 1) * prefix[n];
    if (prefix[n] + sum >= x) {
        lo = 0;
        hi = n;
        while (hi - lo > 1) {
            int mid = lo + (hi - lo) / 2;
            if (sum + prefix[n] - prefix[mid] < x) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
    } else {
        lo = -1;
    }
    // std::cout << "FAST: n = " << n << "; k = " << k << "; x = " << x << std::endl;
    // return count + lo + 1;
    std::cout << count + lo + 1 << '\n';
    return 0;
}


int64_t slow(int n, int k, int64_t x, std::vector<int>& a) {
    std::vector<int> b(n * k);
    for (int64_t i = 0; i < n * 1LL * k; ++i) {
        if (i < n) {
            b[i] = a[i];
        } else {
            b[i] = b[i - n];
        }
    }
    std::vector<int64_t> prefix(n * 1LL * k + 1, 0);
    for (int64_t i = 0; i < n * 1LL * k; ++i) {
        prefix[i + 1] = prefix[i] + b[i];
    }
    int64_t right = 0;
    for (; right < n * 1LL * k; ++right) {
        if (prefix[n * 1LL * k] - prefix[right] < x) {
            break;
        }
    }
    // std::cout << "SLOW: n = " << n << "; k = " << k << "; x = " << x << std::endl;
    return right;
}

inline std::random_device randomDevice{};
inline std::mt19937_64 rng(randomDevice());

inline int64_t RandomInt64(const int64_t lo, const int64_t hi) { // [lo, hi]
  assert(lo <= hi);
  return lo + std::llabs(static_cast<decltype(lo)>(rng())) % (hi - lo + 1);
}


void test() {
    for(int t = 0; t < 1000; ++t) {
        int n = rand() % 1000 + 1;
        int k = rand() % 1000 + 1;
        int64_t x = RandomInt64(1, 1000000000000000000);
        std::vector<int> a(n);
        for(int i = 0; i < n; ++i) {
            a[i] = rand() % 100000000 + 1;
        }

        long long correct = slow(n, k, x, a), wrong = fast(n, k, x, a);
        if (correct != wrong) {
            std::cout << "TEST " << t + 1 << ": WRONG" << std::endl;
            std::cout << n << ' ' << k << ' ' << x << std::endl;
            for (int i = 0; i < n; ++i)
                std::cout << a[i] << ' ';
            std::cout << std::endl << "Answer: " << wrong << "; Expected: " << correct << std::endl << std::endl;
        } 
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t-- > 0) {
        int n, k;
        long long x;
        std::cin >> n >> k >> x;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
            std::cin >> a[i];
        fast(n, k, x, a);
        // test();
    }

    return 0;
}