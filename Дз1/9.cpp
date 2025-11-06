#include <iostream>

int main() {
    int n, i = 0, step = 1;
    std::cin >> n;
    while (step <= n) {
        std::cout << step << " ";
        step *= 2;
    }
    return 0;
}