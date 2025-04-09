#include <bits/stdc++.h>

const int N = 200'000;


std::vector<int> solve() {
    std::vector<int> arr(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        int cur = i;
        arr[i] = arr[i - 1];
        while (cur > 0) {
            arr[i] += cur % 10;
            cur /= 10;
        }
    }
    return arr;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<int> arr = solve();

    int t;
    std::cin >> t;

    while (t-- > 0) {
        int n;
        std::cin >> n;
        std::cout << arr[n] << '\n';
    }
}