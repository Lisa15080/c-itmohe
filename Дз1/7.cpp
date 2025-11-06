#include <iostream>

int main() {
    int a, b, flag = 0;
    std::cin >> a >> b;
    for (int i = b; i >= a; i--) {
        if (i % 7 == 0) {
            std::cout << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        std::cout << -1;
    }
    return 0;
}