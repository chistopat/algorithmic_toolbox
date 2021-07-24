#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

struct Item {
    double value = 0;
    double weight = 0;
};

double get_optimal_value(double capacity, vector<Item> items) {
  double value = 0.0;
  std::sort(items.begin(), items.end(),
              [](const Item& left, const Item& right)
              {return (left.value / left.weight) > (right.value / right.weight);});

    for (const auto& item : items) {
        if (item.weight <= capacity) {
            capacity -= item.weight;
            value += item.value;
        } else {
            value += item.value * (capacity / item.weight);
            capacity = 0;
        }
    }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<Item> items(n);
  for (auto& item: items) {
      std::cin >> item.value;
      std::cin >> item.weight;
  }

  double optimal_value = get_optimal_value(capacity, items);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
