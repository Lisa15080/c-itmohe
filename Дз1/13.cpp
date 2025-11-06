#include <iostream>

int main() {
    int x, count = 1;
    std::cin >> x;
    if (x == 0) {
        std::cout << 0;
        return 0;
    }
    int mx = x;
    while (x != 0) {
        std::cin >> x;
        if (mx < x) {
            mx = x;
            count = 1;
        }
        else if (mx == x) {
            count++;
        }
    }
    std::cout << count;
    return 0;
}