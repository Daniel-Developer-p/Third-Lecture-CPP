#include <iostream>

void check_positive_long(int n);
void check_positive_short(int n);
void check_positive_hell(int n);
void test_switch(int n);
void loop_via_goto();

int main() {
    int num;
    std::cin >> num;
    check_positive_short(num);
    check_positive_long(num);
    check_positive_hell(num);
    test_switch(num);
    loop_via_goto();

    return 0;
}

void loop_via_goto() {
    int number = 0;
    loop:
        std::cout << number << std::endl;
        number++;
        if (number > 5) {
            goto loop;
        }
}

void test_switch(int n) {
    switch (n) {
        case 0:
            std::cout << "That's a zero." << std::endl;
            break;
        case 1:
            std::cout << "That's a one." << std::endl;
            break;
        case 5:
            std::cout << "That's a five." << std::endl;
            break;
        default:
            std::cout << "Unknown number." << std::endl;
            break;
    }
}


void check_positive_hell(int n) {
    if (n >= 0) {
        std::cout
            << "Positive "
            << ((n % 2 == 0) ? "even" : "uneven")
            << " Number"
            << std::endl;
    } else {
        std::cout << "Negative Number" << std::endl;
    }
}



void check_positive_short(int n) {
    if (n >= 0 && n % 2 == 0) {
        std::cout << "Positive Number" << std::endl;
    } else if (n >= 0 && n % 2 == 1){
        std::cout << "Positive uneven Number" << std::endl;
    } else {
        std::cout << "Negative Number" << std::endl;
    }
}

void check_positive_long(int n) {
    if (n >= 0) {
        if (n % 2 == 0) {
            std::cout << "Positive Number" << std::endl;
        } else if (n >= 0) {
            if (n % 2 == 1) {
                std::cout << "Positive uneven Number" << std::endl;
            }
        } else {
            std::cout << "Negative Number" << std::endl;
        }
    }
}