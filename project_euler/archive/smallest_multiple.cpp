#include <bits/stdc++.h>
#include <math.h>


int main() {
    int n;
    std::cin >> n;

    std::vector<int> freq(n + 1);

    for (int i = 1; i <= n; ++i) {
        
        
        int x = i;
        int j = 2;
        while (j <= x) { 
            int count = 0;
            while (x > 0 && x % j == 0) {
                count++;
                x /= j;
            }
            freq[j] = std::max(freq[j], count);
            j++;
        }
    }
        
    int multiple = 1;
    for (int i = 1; i <= n; ++i) {
        multiple *= pow(i, freq[i]);
    }
    std::cout << multiple;
}
// 2 3 4 5 6 7 8 9 10
// 