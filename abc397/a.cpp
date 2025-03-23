#include <bits/stdc++.h>

// solved

int main() {
    float x;
    std::cin >> x;
    if (x >= 38.0) {
        std::cout << 1 << '\n';
    } else if (x >= 37.5) {
        std::cout << 2 << '\n';
    } else {
        std::cout << 3 << '\n';
    }
}