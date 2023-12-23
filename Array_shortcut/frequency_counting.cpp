#include <iostream>
#include <vector>

int main() {
    int N, M;

    std::cin >> N >> M;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    // Count the occurrences of each number from 1 to M in the array
    std::vector<int> count(M + 1, 0);
    for (int i = 0; i < N; ++i) {
        count[A[i]]++;
    }

    // Print the count for each number from 1 to M
    for (int i = 1; i <= M; ++i) {
        std::cout << count[i] << std::endl;
    }

    return 0;
}

