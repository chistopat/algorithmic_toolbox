#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

uint64_t MaxPairwiseProductFast(const std::vector<int>& numbers) {
    uint64_t first = 0;
    uint64_t second = 0;

    for (const auto& i : numbers) {
        if (i > first) {
            second = first;
            first = i;
        } else if (i > second && i <=first) {
            second = i;
        }
    }

    return first * second;
}

void TestResult() {
    assert(MaxPairwiseProductFast({1, 2, 3}) == 6);
    assert(MaxPairwiseProductFast({9, 1, 9}) == 81);
    assert(MaxPairwiseProductFast({100000, 90000}) == 9000000000);
}

int main() {
    TestResult();
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProductFast(numbers) << "\n";
    return 0;
}
