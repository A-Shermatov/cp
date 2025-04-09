#include <bits/stdc++.h>


void solve(int a, int b, int c) {
    int aa = 2 * b - c, bb = a + (c - a) / 2, cc = 2 * b - a;
    if (aa >= a && aa % a == 0 && aa != 0 || bb >= b && (c - a) % 2 == 0 && bb % b == 0 && bb != 0 || cc >= c && cc % c == 0 && cc != 0)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;
    while (t-- > 0) {
        int a, b, c;
        std::cin >> a >> b >> c;
    
        solve(a, b, c);
    }
    
}