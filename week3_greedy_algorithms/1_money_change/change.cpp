#include <iostream>
#include <vector>

int get_change(int m) {
    std::vector<int> coins {10, 5, 1};
    int result = 0;
    for (const auto& coin : coins) {
        result += (m / coin);
        m %= coin;
    }
    return result;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
