#include <iostream>

void loop_via_for();
void loop_via_do_while();
void loop_via_while();
void loop_via_while_beskonechno();

int main() {

    std::cout << "      Results:        " << std::endl;

    loop_via_for();
    loop_via_while();
    loop_via_do_while();
    loop_via_while_beskonechno();

    return 0;
}

void loop_via_for() {
    std::cout << "\n    loop_via_for()      \n" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }
}

void loop_via_while() { // Цикл Бегующего Мальчика На Физре bruh
    std::cout << "\n    loop_via_while()      \n" << std::endl;
    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }
}

void loop_via_do_while() { // Пост Условие
    std::cout << "\n    loop_via_do_while()      \n" << std::endl;
    int i = -1;
    do {
        i++;
        std::cout << i << std::endl;
    } while (i < 5);
}


void loop_via_while_beskonechno() {  // Пред Условие
    std::cout << "\n    loop_via_while_beskonechno()      \n" << std::endl;
    int i = -1;
    while (true) {
        i++;
        if (i > 15) { break; }
        if (i % 3 != 0) { continue; }
        std::cout << i << std::endl;
    }
}