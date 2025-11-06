#include <iostream>

int main() {
    int n, x, s = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x % 8 == 0 && abs(x) >= 10 && abs(x) <= 99) {
            s += x;
        }
    }
    std::cout << s;
    return 0;
}