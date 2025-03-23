#include <bits/stdc++.h>
// unsolved

int main() {
    long long n;
    std::cin >> n;
    long long y = 1;
    while (y <= 1000000) {
        long long x_cube = n + y * y * y;
        long long x = std::rint(std::cbrt(x_cube));
        if (x * x * x == x_cube) {
            std::cout << x << ' ' << y;
            return 0;
        }
        y++;
    }
    std::cout << -1 << '\n';
}