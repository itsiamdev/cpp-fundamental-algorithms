#include <iostream>

// for loop: repeats a block of code a known number of times
// Syntax: for (initialization; condition; update)
void basic_for_loop() {
    std::cout << "Numbers from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// for loop: iterate backwards
void for_loop_reverse() {
    std::cout << "Numbers from 5 to 1:" << std::endl;
    for (int i = 5; i >= 1; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// nested for loop: a for loop inside another for loop
void nested_for_loop() {
    std::cout << "Multiplication table 1-3:" << std::endl;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
}

// iterating over an array with a traditional for loop
void range_based_for_loop() {
    std::cout << "Iterating over an array:" << std::endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "=== Basic For Loop ===" << std::endl;
    basic_for_loop();

    std::cout << "\n=== For Loop Reverse ===" << std::endl;
    for_loop_reverse();

    std::cout << "\n=== Nested For Loop ===" << std::endl;
    nested_for_loop();

    std::cout << "\n=== Range-Based For Loop ===" << std::endl;
    range_based_for_loop();

    return 0;
}
