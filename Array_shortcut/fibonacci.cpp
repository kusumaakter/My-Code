#include <iostream>

int fibo(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int N;
    std::cin >> N;


    std::cout << fibo(N) << std::endl;

    return 0;
}

