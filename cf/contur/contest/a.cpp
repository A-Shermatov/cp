#include <bits/stdc++.h>

std::pair<int, int> solve(int r, int s, const std::vector<std::string>& goose) {
    std::set<std::pair<char, char>> deck;
    for (char rank : "23456789TJQKA") {
        for (char suit : "CDHS") {
            deck.insert({rank, suit});
        }
    }
    auto parse = [&] (const std::string& s) {
        std::set<char> ranks, suits;
        int split = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '2' && s[i] <= '9' || s[i] == 'T' || s[i] == 'J' || s[i] == 'Q' || s[i] == 'K' || s[i] == 'A') {
                ranks.insert(s[i]);
                split = i + 1;
            } else {
                suits.insert(s[i]);
            }
        }
        if (ranks.empty()) {
            ranks = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
        }
        if (suits.empty()) {
            suits = {'C', 'D', 'H', 'S'};
        }
    
        std::set<std::pair<char, char>> cards;
        for (char r : ranks) {
            for (char s : suits) {
                cards.insert({r, s});
            }
        }
        return cards;
    };
    std::set<std::pair<char, char>> removed;
    for (int i = 0; i < r; i++) {
        auto subset = parse(goose[i]);
        removed.insert(subset.begin(), subset.end());
    }

    int n = 52 - removed.size();
    if (n == 0) return std::make_pair(0, 1);

    std::set<std::pair<char, char>> winning;
    for (int i = r; i < r + s; i++) {
        auto subset = parse(goose[i]);
        for (auto card : subset) {
            if (removed.count(card) == 0) {
                winning.insert(card);
            }
        }
    }

    return std::make_pair(winning.size(), n);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int r1, s1, r2, s2;
    std::cin >> r1 >> s1 >> r2 >> s2;

    std::vector<std::string> goose(r1 + s1);
    for (int i = 0; i < r1 + s1; ++i) {
        std::cin >> goose[i];
    }
    std::pair<int, int> mn = solve(r1, s1, goose);
    double p = (double)mn.first / mn.second;

    goose.resize(r2 + s2);
    for (int i = 0; i < r2 + s2; ++i) {
        std::cin >> goose[i];
    }

    
    mn = solve(r2, s2, goose);
    p = std::max(p, (double)mn.first / mn.second);

    std::cout << std::fixed << std::setprecision(6) << p;
    return 0;
}