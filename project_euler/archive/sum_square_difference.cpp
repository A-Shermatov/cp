#include <bits/stdc++.h>


int main() {
    int n;
    std::cin >> n;
    // The sum of squares of first n natural numbers: n * (n + 1) * (2 * n + 1) / 6
    // The square of the sum first natural numbers: n * (n + 1) / 2
    int x = n * (n + 1) / 2;
    std::cout << x * x - x * (2 * n + 1) / 3;
    
}