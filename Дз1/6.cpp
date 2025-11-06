#include <iostream>

int main() {
    int a, i = 1, flag = 0;
    std::cin >> a;
    int fib[100] = {1, 1};
    while (fib[i] <= a) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] == a) {
            std::cout << i + 1;
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0) {
        std::cout << -1;
    }
    return 0;
}