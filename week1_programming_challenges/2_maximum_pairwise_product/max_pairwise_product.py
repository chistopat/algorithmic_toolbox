# python3


def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first + 1, n):
            max_product = max(max_product,
                              numbers[first] * numbers[second])

    return max_product


def max_pairwise_product_fast(numbers):
    first = 0
    second = 0
    for number in numbers:
        if number > first:
            first, second = number, first
        elif second < number <= first:
            second = number
    return first * second


def test_result():
    assert max_pairwise_product([1, 2, 3]) == 6
    assert max_pairwise_product([9, 1, 9]) == 81
    assert max_pairwise_product([100000, 90000]) == 9000000000


if __name__ == '__main__':
    test_result()
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product_fast(input_numbers))
