#include <iostream>

// if statement: executes a block of code if a specified condition is true
void if_example() {
    int number = 10;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    }
}

// if-else statement: executes one block if condition is true, another block if it is false
void if_else_example() {
    int number = -5;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is not positive." << std::endl;
    }
}

// if-else-if ladder: checks multiple conditions in sequence
void if_else_if_example() {
    int number = 0;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }
}

// nested if: an if statement inside another if statement
void nested_if_example() {
    int age = 20;
    bool has_id = true;

    if (age >= 18) {
        if (has_id) {
            std::cout << "You are allowed to enter." << std::endl;
        } else {
            std::cout << "You need to show an ID." << std::endl;
        }
    } else {
        std::cout << "You are not allowed to enter." << std::endl;
    }
}

int main() {
    std::cout << "=== IF Statement ===" << std::endl;
    if_example();

    std::cout << "\n=== IF-ELSE Statement ===" << std::endl;
    if_else_example();

    std::cout << "\n=== IF-ELSE-IF Ladder ===" << std::endl;
    if_else_if_example();

    std::cout << "\n=== Nested IF ===" << std::endl;
    nested_if_example();

    return 0;
}
