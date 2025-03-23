#include <bits/stdc++.h>


int main() {
    int n;
    std::cin >> n;
    int f1 = 1, f2 = 2, sum = 0;
    while (f2 <= n) {
        if ((f2 & 1) == 0)
            sum += f2;
        // swap two numbers;
        f1 ^= f2;
        f2 ^= f1;
        f1 ^= f2;
        
        f2 += f1;
    }
    std::cout << sum << '\n';
}