#include <iostream>
#include <vector>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(int n) {
    std::vector<long> list(n + 1);
    list[0] = 0;
    list[1] = 1;

    for (int i = 2; i <= n; ++i) {
        list[i] = (list[i - 1] + list[i - 2]) % 10;
    }

    return list[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }
