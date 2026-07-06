#include <iostream>

// do-while loop: executes a block of code at least once,
// then repeats the loop while a specified condition is true
// The condition is evaluated after each iteration
void basic_do_while_loop() {
    int count = 1;

    std::cout << "Numbers from 1 to 5:" << std::endl;
    do {
        std::cout << count << " ";
        ++count;
    } while (count <= 5);
    std::cout << std::endl;
}

// do-while loop: guarantees at least one execution
void do_while_guarantee() {
    int number;

    std::cout << "Enter a number greater than 10: ";
    std::cin >> number;

    do {
        std::cout << "You entered: " << number << ". Try again." << std::endl;
        std::cout << "Enter a number greater than 10: ";
        std::cin >> number;
    } while (number <= 10);

    std::cout << "Correct!" << std::endl;
}

// do-while loop: menu example
void do_while_menu() {
    int choice;

    do {
        std::cout << "\n=== MENU ===" << std::endl;
        std::cout << "1. Say Hello" << std::endl;
        std::cout << "2. Say Goodbye" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Hello!" << std::endl;
                break;
            case 2:
                std::cout << "Goodbye!" << std::endl;
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);
}

int main() {
    std::cout << "=== Basic Do-While Loop ===" << std::endl;
    basic_do_while_loop();

    std::cout << "\n=== Do-While Guarantee ===" << std::endl;
    do_while_guarantee();

    std::cout << "\n=== Do-While Menu ===" << std::endl;
    do_while_menu();

    return 0;
}
