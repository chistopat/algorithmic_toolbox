#include <iostream>
#include <cmath>

uint64_t gcd_fast(uint64_t a, uint64_t b) {
    while (a && b)
        (a > b) ? a%=b : b%=a;
    return std::max(a, b);
}

uint64_t lcm_fast(uint64_t a, uint64_t b) {
    return a /gcd_fast(a, b) * b;
}


int main() {
  uint64_t a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
