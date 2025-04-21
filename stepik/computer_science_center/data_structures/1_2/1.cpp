#include <bits/stdc++.h>


void solve(std::string s) {
    int n = s.size();
    std::stack<std::pair<char, int>> st;
    for (int i = 0; i < n; ++i) {
        
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            std::pair<char, int> pr;
            pr.first = s[i];
            pr.second = i + 1;
            st.emplace(pr);
        } else if (s[i] == ')') {
            if (st.empty() || !st.empty() && st.top().first != '(') {
                std::cout << i + 1;
                return ;
            }
            st.pop();
        } else if (s[i] == ']') {
            if (st.empty() || !st.empty() && st.top().first != '[') {
                std::cout << i + 1;
                return ;
            }
            st.pop();
        } else if (s[i] == '}') {
            if (st.empty() || !st.empty() && st.top().first != '{') {
                std::cout << i + 1;
                return ;
            }
            st.pop();
        }
    }

    if (st.empty()) {
        std::cout << "Success";
        
        return ;
    }
    while (st.size() > 1)
        st.pop();
    std::cout << st.top().second;
    
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::string s;
    std::cin >> s;
    solve(s);
}