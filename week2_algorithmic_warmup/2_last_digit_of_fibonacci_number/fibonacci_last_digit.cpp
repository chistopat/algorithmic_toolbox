#include <iostream>

uint64_t get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    uint64_t previous = 0;
    uint64_t current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        uint64_t tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int GetFibonacciLastDigit(int n) {
    if (n <= 1) return n;
    int previous = 0;
    int current = 1;
    int fibonacci = 0;
    while (--n) {
        fibonacci = (previous + current) % 10;
        previous = current;
        current = fibonacci;
    }
    return fibonacci;
}

int main() {
    int n;
    std::cin >> n;
    int c = GetFibonacciLastDigit(n);
    std::cout << c << '\n';
}

