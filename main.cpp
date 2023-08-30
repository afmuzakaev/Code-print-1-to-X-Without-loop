#include <iostream>

void printNumbers(int n) {
    if (n <= 0) {
        return;
    }

    // Print numbers from 1 to n-1
    printNumbers(n - 1);

    // Print the current number
    std::cout << n << " ";
}

int main() {
    int N;
    std::cout << "Enter a positive integer N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "N must be a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Numbers from 1 to " << N << " are: ";
    printNumbers(N);
    std::cout << std::endl;

    return 0;
}
