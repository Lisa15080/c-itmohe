#include <iostream>

int main() {
    int n, count = 0, x;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x > 0) {
            count++;
        }
    }
    std::cout << count;
    return 0;
}