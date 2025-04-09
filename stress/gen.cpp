#include <bits/stdc++.h>

#include "utils.hpp"

constexpr void Scan(auto&&... args) noexcept { (std::cin >> ... >> args); }
constexpr void Print(auto&&... args) noexcept { ((std::cout << args << ' '), ...); }
constexpr void Println(auto&&... args) noexcept { Print(std::forward<decltype(args)>(args)...); std::cout << '\n'; }

auto Gen() {
  std::cout << utils::RandomInt(1, 10) << '\n';
}

int main() {
  Gen();
}