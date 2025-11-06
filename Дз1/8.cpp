#include <iostream>
#include <string>

int main() {
    int flag=0;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            s[i] = 'T';
        }
        else if (s[i] == 'T') {
            s[i] = 'A';
        }
        else if (s[i] == 'C') {
            s[i] = 'G';
        }
        else if (s[i] == 'G') {
            s[i] = 'C';
        }
        else {
            flag=1;
            std::cout << "Введите корректную цепочку ДНК";
            break;
        }
    }
    if (flag==0) {
        std::cout << s;
        return 0;
    }
}