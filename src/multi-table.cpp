#include <iostream>

void multi_table(int n);

int main() {
    multi_table(5);
    return 0;
}

void multi_table(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; i <= n; i++) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
}
