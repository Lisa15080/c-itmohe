#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a, mas[n];
    std::cin >> a;
    int min = a;
    mas[0] = a;
    for (int i = 1; i < n; i++) {
        std::cin >> a;
        mas[i] = a;
        if (min > a) min = a;
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] == min) k++;
    }
    std::cout << k;
    return 0;
}