#include <bits/stdc++.h>


int main() {
    int n;
    std::cin >> n;
    int i = 3;
    int sum = 0;
    while (i < n) {
        sum += i;
        i += 3;
    }
    i = 5;
    while (i < n) {
        sum += i;
        if (i % 3 == 0)
            sum -= i;
        i += 5;
    }
    std::cout << sum;
}