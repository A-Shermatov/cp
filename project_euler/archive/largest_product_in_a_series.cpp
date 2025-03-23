#include <bits/stdc++.h>


void solve(std::string s, int len) {
    // this solution (function) from https://github.com/aminjonshermatov/competitive_programming/blob/master/projecteuler/LargestProductInASeries.cpp
    int64_t ans = 0;
    for (int i = 0; i + len < s.size(); ++i) {
        int64_t cur = 1;
        for (int j = 0; j < len; ++j) {
            cur *= s[i + j] - '0';
        }
        if (cur > ans) {
            ans = cur;
        }
    }
    std::cout << "Solve = " << ans << '\n';
  }

int64_t slow(std::string s, int k) {
    int64_t mx = 0;
    int l = -1, r = -1;
    for (int i = 0; i + k < s.size(); ++i) {
        int64_t mult = 1;
        for (int j = 0; j < k; ++j) {
            mult *= s[i + j] - '0';
        }
        if (mult > mx) {
            mx = mult;
            l = i + 1;
            r = i + k;
        }
    }
    return mx;
}


int64_t fast(std::string s, int k) {
    int64_t mx = -1, mult = 1;
    int l = 0, r = 0;
    for (; r < s.size(); ++r) {
        int dig = s[r] - '0';
        if (dig == 0) {
            if (r - l == k) {
                mx = std::max(mx, mult);
            }
            mult = 1;
            l = r + 1;
        } else {
            if (r - l == k) {
                mx = std::max(mx, mult);
                mult /= s[l++] - '0';
                mult *= dig;
            } else {
                mult *= dig;
            }
        }
    }
    if (r - l == k) 
        mx = std::max(mx, mult);
    return mx;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int k;
    std::cin >> k;

    std::string s;
    s = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    int64_t slo = slow(s, k);
    int64_t fas = fast(s, k);
    std::cout << "Slow = " << slo << "; Fast = " << fas << "; ";
    solve(s, k);

}
