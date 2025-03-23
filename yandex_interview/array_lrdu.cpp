#include <bits/stdc++.h>


int main() {
    int n;
    std::cin >> n;
    
    std::vector<char> a(n);
    for (int i = 0; i < n; ++i) 
        std::cin >> a[i];

    std::set<std::tuple<int, int>> st;
    int x = 0, y = 0;
    auto forward = [&x, &y] (auto el) -> void {
        switch (el)
        {
        case 'R':
            x++;
            break;
        case 'L':
            x--;
            break;
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        default:
            break;
        }
    };

    auto back = [&x, &y] (auto el) -> void {
        switch (el)
        {
        case 'R':
            x--;
            break;
        case 'L':
            x++;
            break;
        case 'U':
            y--;
            break;
        case 'D':
            y++;
            break;
        default:
            break;
        }
    };
    
    std::vector<char> res;
    for (int i = 0; i < n; ++i) {
        forward(a[i]);
        auto xx = x, yy = y;
        char last = ' ';
        if (st.find(std::tuple(x, y)) != st.end()) back(a[i]);
        while (st.find(std::tuple(xx, yy)) != st.end()) {
            st.erase(std::tuple(x, y));
            back(res.back());
            last = res.back();
            res.pop_back();
        }
        if (last != ' ') {
            forward(last);
            st.emplace(std::tuple(x, y));
            res.push_back(last);
        } else {
            st.emplace(std::tuple(x, y));
            res.push_back(a[i]);
        }
    }
    for (auto el: res)
        std::cout << el << ' ';
}