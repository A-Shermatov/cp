#include <bits/stdc++.h>


void solve(int n, int m) {
    std::cout << ((std::min(n, m) & 1 == 1) ? "Akshat": "Malvika");
}


int main () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    solve(n, m);
}