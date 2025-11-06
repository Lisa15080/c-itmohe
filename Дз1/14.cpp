#include <iostream>
#include <string>
#include <vector>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::string a_str = std::to_string(a);
    std::string b_str = std::to_string(b);
    std::vector<char> povt;
    std::vector<char> printed;

    for (char char_a : a_str) {
        for (char char_b : b_str) {
            if (char_a == char_b) {
                povt.push_back(char_a);
                break;
            }
        }
    }

    for (int i = 0; i < povt.size(); i++) {
        bool bool_printed = false;
        for (int j = 0; j < printed.size(); j++) {
            if (povt[i] == printed[j]) {
                bool_printed = true;
                break;
            }
        }
        if (!bool_printed) {
            std::cout << povt[i] << ' ';
            printed.push_back(povt[i]);
        }
    }
    return 0;
}

