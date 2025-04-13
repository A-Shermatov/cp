#include <bits/stdc++.h>


void solve(int n) {
    if (200 <= n && 299 >= n) {
        std::cout << "Success";
    } else {
        std::cout << "Failure";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::cin >> n;

    solve(n);
}