#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        if (mx < a[i]) {
            mx = a[i];
        }
    }
    
    std::cout << mx;
    return 0;
}