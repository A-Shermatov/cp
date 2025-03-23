#include <bits/stdc++.h>
#include <math.h>

int main() {
    int n;
    std::cin >> n;

    int m = pow(10, n) - 1;
    
    auto is_palindrome = [&] (int x) -> bool {
        int y = 0, temp = x;
        while (temp > 0) {
            y = y * 10 + temp % 10;
            temp /= 10;
        }
        return x == y;
    };
    int mx = -1;
    for (int i = m; i > 0; --i)
        for (int j = m; j > 0; --j)
            if (is_palindrome(i * j))
                mx = std::max(mx, i * j);
    std::cout << mx;
}