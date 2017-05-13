#include <iostream>

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
    int fiblist[n];

    fiblist[0] = 0;
    if(n>0) {
        fiblist[1] = 1;
    }

    for(int i = 2; i<= n; ++i) {
        fiblist[i] = (fiblist[i - 1] + fiblist[i - 2])%10;
        //cout << fiblist[i] << endl;
    }

    return fiblist[n];
}

int main() {
    int n;
    std::cin >> n;
    //int c = get_fibonacci_last_digit_naive(n);
    //std::cout << c << '\n';
    int d = get_fibonacci_last_digit_fast(n);
    std::cout << d << '\n';
}
