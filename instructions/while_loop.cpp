#include <iostream>

// while loop: repeats a block of code while a specified condition is true
// The condition is evaluated before each iteration
void basic_while_loop() {
    int count = 1;

    std::cout << "Numbers from 1 to 5:" << std::endl;
    while (count <= 5) {
        std::cout << count << " ";
        ++count;
    }
    std::cout << std::endl;
}

// while loop: user input example
void while_user_input() {
    int number;

    std::cout << "Enter a positive number (enter -1 to stop): ";
    std::cin >> number;

    while (number != -1) {
        std::cout << "You entered: " << number << std::endl;
        std::cout << "Enter another number (enter -1 to stop): ";
        std::cin >> number;
    }

    std::cout << "Loop ended." << std::endl;
}

// nested while loop: a while loop inside another while loop
void nested_while_loop() {
    int i = 1;

    std::cout << "Pattern:" << std::endl;
    while (i <= 3) {
        int j = 1;
        while (j <= i) {
            std::cout << "* ";
            ++j;
        }
        std::cout << std::endl;
        ++i;
    }
}

int main() {
    std::cout << "=== Basic While Loop ===" << std::endl;
    basic_while_loop();

    std::cout << "\n=== While Loop with User Input ===" << std::endl;
    while_user_input();

    std::cout << "\n=== Nested While Loop ===" << std::endl;
    nested_while_loop();

    return 0;
}
