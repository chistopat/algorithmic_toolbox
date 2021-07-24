# Uses python3
def calc_fib(n):
    if (n <= 1):
        return n

    return calc_fib(n - 1) + calc_fib(n - 2)


def calc_fibonacci_fast(n):
    if n <= 1:
        return n
    a = 0
    b = 1
    for _ in range(n):
        a, b = b, a + b

    return a


def test_result():
    assert calc_fibonacci_fast(0) == 0
    assert calc_fibonacci_fast(1) == 1
    assert calc_fibonacci_fast(3) == 2
    assert calc_fibonacci_fast(7) == 13
    assert calc_fibonacci_fast(10) == 55


def main():
    test_result()
    n = int(input())
    print(calc_fibonacci_fast(n))


if __name__ == '__main__':
    main()
